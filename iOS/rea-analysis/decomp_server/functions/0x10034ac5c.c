// rea decompile_all
// name: FUN_10034ac5c
// address: 0x10034ac5c
// body: available
// range: 0x10034ac5c-0x10034ad5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10034ac5c(ulong param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  
  uVar1 = 0;
  FUN_1002772b8(0);
  uVar2 = param_1;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_1,uVar1);
  uVar3 = param_2;
  _SecTrustSetAnchorCertificates(param_2,uVar2);
  if (((int)uVar3 != 0) ||
     (_SecTrustSetAnchorCertificatesOnly(param_2,1), uVar3 = param_2, (int)param_2 != 0)) {
    uVar1 = 0;
    FUN_100277ad0(0);
    puVar4 = &DAT_100a824a8;
    FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
    _swift_allocError(uVar1,puVar4,0,0);
    *puVar4 = uVar3 & 0xffffffff;
    puVar4[1] = param_1;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[2] = 0;
    *(undefined1 *)(puVar4 + 5) = 2;
    _swift_storeEnumTagMultiPayload(puVar4,uVar1,0xb);
    _swift_willThrow();
    _swift_bridgeObjectRetain(param_1);
  }
  return;
}

