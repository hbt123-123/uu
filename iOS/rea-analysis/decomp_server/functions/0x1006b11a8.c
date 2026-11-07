// rea decompile_all
// name: FUN_1006b11a8
// address: 0x1006b11a8
// body: available
// range: 0x1006b11a8-0x1006b130f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1006b11a8(uint *param_1,undefined8 *param_2,size_t param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar6;
  undefined8 uVar5;
  uint uVar7;
  uint uVar9;
  undefined8 uVar8;
  
  uVar4 = *param_1 + (int)param_3;
  *param_1 = uVar4;
  param_1[1] = param_1[1] | (uint)(0xf < param_3 || 0xf < uVar4);
  uVar4 = param_1[10];
  uVar3 = (ulong)uVar4;
  if (uVar3 + param_3 < 0x10) {
    _memcpy((void *)((long)param_1 + uVar3 + 0x18),param_2,param_3);
    param_1[10] = param_1[10] + (int)param_3;
    return 0;
  }
  puVar1 = (undefined8 *)((long)param_2 + param_3);
  if (uVar4 != 0) {
    _memcpy((void *)((long)param_1 + uVar3 + 0x18),param_2,(ulong)(0x10 - uVar4));
    uVar4 = (int)*(undefined8 *)(param_1 + 2) + (int)*(undefined8 *)(param_1 + 6) * -0x7a143589;
    uVar6 = (int)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20) +
            (int)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20) * -0x7a143589;
    uVar7 = (int)*(undefined8 *)(param_1 + 4) + (int)*(undefined8 *)(param_1 + 8) * -0x7a143589;
    uVar9 = (int)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20) +
            (int)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20) * -0x7a143589;
    *(ulong *)(param_1 + 4) =
         CONCAT44((uVar9 * 0x2000 + (uVar9 >> 0x13)) * -0x61c8864f,
                  (uVar7 * 0x2000 + (uVar7 >> 0x13)) * -0x61c8864f);
    *(ulong *)(param_1 + 2) =
         CONCAT44((uVar6 * 0x2000 + (uVar6 >> 0x13)) * -0x61c8864f,
                  (uVar4 * 0x2000 + (uVar4 >> 0x13)) * -0x61c8864f);
    param_2 = (undefined8 *)((long)param_2 + (ulong)(0x10 - param_1[10]));
    param_1[10] = 0;
  }
  if (param_2 <= puVar1 + -2) {
    uVar8 = *(undefined8 *)(param_1 + 4);
    uVar5 = *(undefined8 *)(param_1 + 2);
    puVar2 = param_2;
    do {
      param_2 = puVar2 + 2;
      uVar4 = (int)uVar5 + (int)*puVar2 * -0x7a143589;
      uVar6 = (int)((ulong)uVar5 >> 0x20) + (int)((ulong)*puVar2 >> 0x20) * -0x7a143589;
      uVar7 = (int)uVar8 + (int)puVar2[1] * -0x7a143589;
      uVar9 = (int)((ulong)uVar8 >> 0x20) + (int)((ulong)puVar2[1] >> 0x20) * -0x7a143589;
      uVar5 = CONCAT44((uVar6 * 0x2000 + (uVar6 >> 0x13)) * -0x61c8864f,
                       (uVar4 * 0x2000 + (uVar4 >> 0x13)) * -0x61c8864f);
      uVar8 = CONCAT44((uVar9 * 0x2000 + (uVar9 >> 0x13)) * -0x61c8864f,
                       (uVar7 * 0x2000 + (uVar7 >> 0x13)) * -0x61c8864f);
      puVar2 = param_2;
    } while (param_2 <= puVar1 + -2);
    *(undefined8 *)(param_1 + 4) = uVar8;
    *(undefined8 *)(param_1 + 2) = uVar5;
  }
  if (puVar1 <= param_2) {
    return 0;
  }
  _memcpy(param_1 + 6,param_2,(long)puVar1 - (long)param_2);
  param_1[10] = (uint)((long)puVar1 - (long)param_2);
  return 0;
}

