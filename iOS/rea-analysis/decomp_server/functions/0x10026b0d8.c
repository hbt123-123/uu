// rea decompile_all
// name: FUN_10026b0d8
// address: 0x10026b0d8
// body: available
// range: 0x10026b0d8-0x10026b1bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10026b1b8 to 0x1007df1a8 _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10026b0d8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(lVar3 + -8);
  uVar5 = (ulong)*(byte *)(lVar4 + 0x50) + 0x40 &
          ((ulong)*(byte *)(lVar4 + 0x50) ^ 0xffffffffffffffff);
  uVar6 = *(long *)(lVar4 + 0x40) + uVar5 + 7 & 0xfffffffffffffff8;
  lVar1 = 0;
  __s10Foundation10URLRequestVMa();
  lVar7 = *(long *)(lVar1 + -8);
  uVar8 = uVar6 + *(byte *)(lVar7 + 0x50) + 8 &
          ((ulong)*(byte *)(lVar7 + 0x50) ^ 0xffffffffffffffff);
  lVar2 = *(long *)(lVar7 + 0x40);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  (**(code **)(lVar4 + 8))(unaff_x20 + uVar5,lVar3);
  _swift_release(*(undefined8 *)(unaff_x20 + uVar6));
  (**(code **)(lVar7 + 8))(unaff_x20 + uVar8,lVar1);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + (lVar2 + uVar8 + 7 & 0xfffffffffffffff8)));
  _swift_deallocObject();
  return;
}

