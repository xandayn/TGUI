#include <TGUI/Widgets/HorizontalWrap.hpp>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

namespace tgui
{
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	HorizontalWrap::HorizontalWrap()
	{
		m_callback.widgetType = "HorizontalWrap";
	}

	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	HorizontalWrap::Ptr HorizontalWrap::create()
	{
		return std::make_shared<HorizontalWrap>();
	}

	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	HorizontalWrap::Ptr HorizontalWrap::copy(HorizontalWrap::ConstPtr layout)
	{
		if (layout)
			return std::static_pointer_cast<HorizontalWrap>(layout->clone());
		else
			return nullptr;
	}

	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	void HorizontalWrap::updateWidgetPositions()
	{
		float currentHoriOffset = 0.f, currentVertOffset = 0.f;
		float currentLineMaxVertOffset = 0.f;
		for (std::size_t i = 0; i < m_widgets.size(); ++i)
		{
			auto size = m_widgets[i]->getSize();

			if (currentHoriOffset + size.x > getSize().x)
			{
				currentVertOffset += currentLineMaxVertOffset;
				currentHoriOffset = currentLineMaxVertOffset = 0.f;
			}

			m_widgets[i]->setPosition(currentHoriOffset, currentVertOffset);

			currentHoriOffset += size.x;
			currentLineMaxVertOffset = std::max(currentLineMaxVertOffset, size.y);
		}
	}

	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
