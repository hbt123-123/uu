// rea decompile_all
// name: FUN_100545f48
// address: 0x100545f48
// body: available
// range: 0x100545f48-0x100545ff7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_100545f48(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  ushort uVar5;
  undefined2 uVar6;
  byte bVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar5 = *(ushort *)(param_1 + 4);
  if ((char)(uVar5 >> 8) != -1) {
    uVar6 = *(undefined2 *)(param_2 + 4);
    bVar7 = (byte)((ushort)uVar6 >> 8);
    if (bVar7 != 0xff) {
      uVar8 = param_1[2];
      uVar10 = param_1[3];
      uVar9 = *param_2;
      uVar12 = param_2[3];
      uVar11 = param_2[2];
      param_1[1] = param_2[1];
      *param_1 = uVar9;
      param_1[3] = uVar12;
      param_1[2] = uVar11;
      *(char *)(param_1 + 4) = (char)uVar6;
      *(byte *)((long)param_1 + 0x21) = bVar7 & 1;
      FUN_10051f490(uVar8,uVar10,uVar5,uVar5 >> 8 & 1);
      goto LAB_100545fb8;
    }
    FUN_100545ef0(param_1);
  }
  uVar8 = *param_2;
  uVar9 = param_2[3];
  uVar10 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar8;
  param_1[3] = uVar9;
  param_1[2] = uVar10;
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
LAB_100545fb8:
  uVar8 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar8;
  uVar1 = *(undefined1 *)(param_2 + 9);
  uVar2 = *(undefined1 *)((long)param_2 + 0x49);
  uVar8 = param_1[7];
  uVar10 = param_1[8];
  uVar3 = *(undefined1 *)((long)param_1 + 0x49);
  uVar9 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar9;
  uVar4 = *(undefined1 *)(param_1 + 9);
  *(undefined1 *)(param_1 + 9) = uVar1;
  *(undefined1 *)((long)param_1 + 0x49) = uVar2;
  FUN_10051f490(uVar8,uVar10,uVar4,uVar3);
  return param_1;
}

