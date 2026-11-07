// rea decompile_all
// name: FUN_100092e68
// address: 0x100092e68
// body: available
// range: 0x100092e68-0x100092f3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100092f3c to 0x1007df1a8 _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100092e68(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  long unaff_x20;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  lVar1 = 0;
  __s10Foundation4UUIDVMa();
  lVar5 = *(long *)(lVar1 + -8);
  uVar6 = (ulong)*(byte *)(lVar5 + 0x50) + 0x2c &
          ((ulong)*(byte *)(lVar5 + 0x50) ^ 0xffffffffffffffff);
  lVar7 = *(long *)(lVar5 + 0x40);
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar9 = *(long *)(lVar2 + -8);
  uVar3 = (ulong)*(byte *)(lVar9 + 0x50);
  uVar8 = uVar6 + lVar7 + uVar3 & (uVar3 ^ 0xffffffffffffffff);
  lVar7 = *(long *)(lVar9 + 0x40);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  (**(code **)(lVar5 + 8))(unaff_x20 + uVar6,lVar1);
  pcVar4 = *(code **)(lVar9 + 8);
  (*pcVar4)(unaff_x20 + uVar8,lVar2);
  (*pcVar4)(unaff_x20 + (lVar7 + uVar3 + uVar8 & (uVar3 ^ 0xffffffffffffffff)),lVar2);
  _swift_deallocObject();
  return;
}

