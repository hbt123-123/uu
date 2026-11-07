// rea decompile_all
// name: thunk_FUN_100342d94
// address: 0x100342d90
// body: available
// range: 0x100342d90-0x100342d93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void thunk_FUN_100342d94(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  ulong uVar4;
  ulong uVar5;
  
  lVar2 = 0;
  FUN_1003423b0();
  uVar4 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  uVar4 = uVar4 + 0x18 & (uVar4 ^ 0xffffffffffffffff);
  uVar5 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + uVar4 + 7 & 0xfffffffffffffff8;
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  lVar1 = unaff_x20 + uVar4;
  lVar3 = 0;
  __s10Foundation4UUIDVMa();
  (**(code **)(*(long *)(lVar3 + -8) + 8))(lVar1,lVar3);
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar2 + 0x14)));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + uVar5));
  _swift_release(*(undefined8 *)(unaff_x20 + uVar5 + 0x10));
  _swift_deallocObject();
  return;
}

