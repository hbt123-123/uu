// rea decompile_all
// name: FUN_1000870e4
// address: 0x1000870e4
// body: available
// range: 0x1000870e4-0x1000871b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000871b0 to 0x1000c2b04 _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000870e4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  ulong uVar4;
  long lVar5;
  
  lVar1 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x10),0x1000e2040,
             &TargetProtocolRequirement_1000e2050);
  lVar2 = 0;
  __sSqMa(0,lVar1);
  uVar4 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  uVar4 = uVar4 + 0x28 & (uVar4 ^ 0xffffffffffffffff);
  lVar2 = *(long *)(*(long *)(lVar2 + -8) + 0x40);
  if (1 < *(ulong *)(unaff_x20 + 0x20)) {
    _swift_bridgeObjectRelease();
  }
  lVar5 = *(long *)(lVar1 + -8);
  lVar3 = unaff_x20 + uVar4;
  (**(code **)(lVar5 + 0x30))(lVar3,1,lVar1);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar5 + 8))(unaff_x20 + uVar4,lVar1);
  }
  lVar1 = unaff_x20 + (lVar2 + uVar4 + 7 & 0xfffffffffffffff8);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x10));
  _swift_deallocObject();
  return;
}

