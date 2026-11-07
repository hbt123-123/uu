// rea decompile_all
// name: FUN_100333430
// address: 0x100333430
// body: available
// range: 0x100333430-0x10033352b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100333430(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  undefined *puVar5;
  ulong uVar6;
  long unaff_x20;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  
  puVar5 = &DAT_100a82c30;
  FUN_100004bb4(&DAT_100a82c30,&DAT_1008171f0);
  uVar6 = (ulong)*(byte *)(*(long *)(puVar5 + -8) + 0x50);
  uVar11 = uVar6 + 0x18 & (uVar6 ^ 0xffffffffffffffff);
  uVar7 = *(long *)(*(long *)(puVar5 + -8) + 0x40) + uVar11 + 7 & 0xfffffffffffffff8;
  puVar5 = &DAT_100a83428;
  FUN_100004bb4(&DAT_100a83428,&DAT_100817bb0);
  uVar6 = (ulong)*(byte *)(*(long *)(puVar5 + -8) + 0x50);
  uVar6 = uVar7 + uVar6 + 8 & (uVar6 ^ 0xffffffffffffffff);
  uVar8 = *(undefined8 *)(unaff_x20 + uVar7);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = (undefined8 *)
           (unaff_x20 + (*(long *)(*(long *)(puVar5 + -8) + 0x40) + uVar6 + 7 & 0xfffffffffffffff8))
  ;
  uVar10 = *puVar1;
  uVar4 = *(undefined1 *)(puVar1 + 1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  lVar3 = *(long *)(param_1 + 0x20);
  FUN_10003f030(param_1,uVar2);
  (**(code **)(lVar3 + 0x158))
            (uVar9,unaff_x20 + uVar11,uVar8,unaff_x20 + uVar6,uVar10,uVar4,uVar2,lVar3);
  return;
}

