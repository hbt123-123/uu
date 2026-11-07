// rea decompile_all
// name: SentrySDK::initialize
// address: 0x10078f8f8
// body: available
// range: 0x10078f8f8-0x10078f99b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentrySDK::initialize(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  ID IVar3;
  
  IVar1 = objc_stub::class((ID)&objc::class_t::SentrySDK);
  if (IVar1 == param_1) {
    puVar2 = &_OBJC_CLASS___NSObject;
    _objc_alloc();
    IVar3 = objc_stub::init((ID)puVar2);
    IVar1 = DAT_100b2e130;
    puVar2 = &_OBJC_CLASS___NSObject;
    DAT_100b2e130 = IVar3;
    _objc_alloc(IVar1);
    IVar3 = objc_stub::init((ID)puVar2);
    IVar1 = DAT_100b2e138;
    puVar2 = &_OBJC_CLASS___NSObject;
    DAT_100b2e138 = IVar3;
    _objc_alloc(IVar1);
    DAT_100b2e140 = objc_stub::init((ID)puVar2);
    DAT_100b2e148 = 0;
    DAT_100b2e150 = 0;
  }
  return;
}

