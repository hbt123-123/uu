// rea decompile_all
// name: SentrySdkInfo::initWithName:version:integrations:features:packages:
// address: 0x10074dc24
// body: available
// range: 0x10074dc24-0x10074dd67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x38 bytes */

ID SentrySdkInfo::initWithName_version_integrations_features_packages_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,ID param_7)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  ID IVar3;
  undefined *puVar4;
  ID IVar5;
  objc_super local_60;
  
  local_60.super_class = &objc::class_t::SentrySdkInfo;
  local_60.receiver = param_1;
  IVar5 = _objc_msgSendSuper2(&local_60,"init");
  if (IVar5 != 0) {
    pcVar1 = &cf___;
    pcVar2 = pcVar1;
    if (param_3 != 0) {
      pcVar2 = (cfstringStruct *)param_3;
    }
    *(cfstringStruct **)(IVar5 + 8) = pcVar2;
    if (param_4 != 0) {
      pcVar1 = (cfstringStruct *)param_4;
    }
    *(cfstringStruct **)(IVar5 + 0x10) = pcVar1;
    puVar4 = PTR____NSArray0___1009953a8;
    IVar3 = *(ID *)PTR____NSArray0___1009953a8;
    if (param_5 != 0) {
      IVar3 = param_5;
    }
    *(ID *)(IVar5 + 0x18) = IVar3;
    IVar3 = *(ID *)puVar4;
    if (param_6 != 0) {
      IVar3 = param_6;
    }
    *(ID *)(IVar5 + 0x20) = IVar3;
    IVar3 = *(ID *)puVar4;
    if (param_7 != 0) {
      IVar3 = param_7;
    }
    *(ID *)(IVar5 + 0x28) = IVar3;
  }
  return IVar5;
}

