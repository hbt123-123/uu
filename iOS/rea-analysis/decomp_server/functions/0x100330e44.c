// rea decompile_all
// name: FUN_100330e44
// address: 0x100330e44
// body: available
// range: 0x100330e44-0x100330f2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100330e44(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  
  puVar7 = &DAT_100a82c30;
  FUN_100004bb4(&DAT_100a82c30,&DAT_1008171f0);
  uVar8 = (ulong)*(byte *)(*(long *)(puVar7 + -8) + 0x50);
  uVar12 = uVar8 + 0x18 & (uVar8 ^ 0xffffffffffffffff);
  uVar8 = *(long *)(*(long *)(puVar7 + -8) + 0x40) + uVar12 + 7 & 0xfffffffffffffff8;
  uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar10 = *(undefined8 *)(unaff_x20 + uVar8);
  puVar1 = (undefined8 *)(unaff_x20 + uVar8 + 8);
  uVar2 = *puVar1;
  uVar4 = puVar1[1];
  puVar1 = (undefined8 *)(unaff_x20 + uVar8 + 0x18);
  uVar11 = *puVar1;
  uVar6 = *(undefined1 *)(puVar1 + 1);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  lVar5 = *(long *)(param_1 + 0x20);
  FUN_10003f030(param_1,uVar3);
  (**(code **)(lVar5 + 0x108))(uVar9,unaff_x20 + uVar12,uVar10,uVar2,uVar4,uVar11,uVar6,uVar3,lVar5)
  ;
  return;
}

