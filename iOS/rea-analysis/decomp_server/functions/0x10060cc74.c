// rea decompile_all
// name: thunk_FUN_10060ce14
// address: 0x10060cc74
// body: available
// range: 0x10060cc74-0x10060cc77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void thunk_FUN_10060ce14(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  ulong uVar4;
  
  lVar1 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(*(long *)(unaff_x20 + 0x18) + 8),*(undefined8 *)(unaff_x20 + 0x10)
             ,0x100904f48,&TargetProtocolRequirement_100904f50);
  lVar2 = 0;
  FUN_100616300(0,lVar1);
  uVar4 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  uVar4 = uVar4 + 0x38 & (uVar4 ^ 0xffffffffffffffff);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  lVar3 = unaff_x20 + uVar4;
  _swift_getEnumCaseMultiPayload(lVar3,lVar2);
  if ((int)lVar3 == 1) {
    _swift_errorRelease(*(undefined8 *)(unaff_x20 + uVar4));
  }
  else {
    (**(code **)(*(long *)(lVar1 + -8) + 8))(unaff_x20 + uVar4,lVar1);
  }
  _swift_deallocObject();
  return;
}

