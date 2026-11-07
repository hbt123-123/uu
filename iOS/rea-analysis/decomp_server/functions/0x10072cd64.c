// rea decompile_all
// name: SAConfigOptions::initWithServerURL:launchOptions:
// address: 0x10072cd64
// body: available
// range: 0x10072cd64-0x10072cea7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

ID SAConfigOptions::initWithServerURL_launchOptions_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  undefined8 uVar3;
  ID local_50;
  class_t *pcStack_48;
  
  pcStack_48 = &objc::class_t::SAConfigOptions;
  local_50 = param_1;
  IVar1 = NSObject::init((ID)&local_50,"init");
  if (IVar1 != 0) {
    *(ID *)(IVar1 + 0xb8) = param_3;
    *(ID *)(IVar1 + 0xc0) = param_4;
    *(undefined8 *)(IVar1 + 0xb0) = 0;
    *(undefined8 *)(IVar1 + 0xa8) = 0x30;
    *(undefined8 *)(IVar1 + 0xa0) = 0x18;
    *(undefined8 *)(IVar1 + 0x50) = 300;
    *(undefined8 *)(IVar1 + 0x38) = 15000;
    *(undefined8 *)(IVar1 + 0x30) = 8;
    *(undefined8 *)(IVar1 + 0x48) = 10000;
    *(undefined8 *)(IVar1 + 0x40) = 100;
    *(undefined4 *)(IVar1 + 0x1e) = 0x1010101;
    *(undefined8 *)(IVar1 + 200) = 0;
    IVar2 = NSMutableArray::array((ID)&_OBJC_CLASS___NSMutableArray);
    *(ID *)(IVar1 + 0xd0) = IVar2;
    IVar2 = NSSet::set((ID)&_OBJC_CLASS___NSSet);
    uVar3 = *(undefined8 *)(IVar1 + 0xd8);
    *(ID *)(IVar1 + 0xd8) = IVar2;
    IVar2 = NSMutableArray::array((ID)&_OBJC_CLASS___NSMutableArray,uVar3);
    *(ID *)(IVar1 + 0xe0) = IVar2;
  }
  return IVar1;
}

