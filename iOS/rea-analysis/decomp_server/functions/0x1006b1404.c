// rea decompile_all
// name: FUN_1006b1404
// address: 0x1006b1404
// body: available
// range: 0x1006b1404-0x1006b15a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1006b1404(long *param_1,long *param_2,size_t param_3)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  *param_1 = *param_1 + param_3;
  uVar2 = *(uint *)(param_1 + 9);
  uVar3 = (ulong)uVar2;
  if (uVar3 + param_3 < 0x20) {
    _memcpy((void *)((long)param_1 + uVar3 + 0x28),param_2,param_3);
    uVar3 = (ulong)(uint)((int)param_1[9] + (int)param_3);
  }
  else {
    plVar1 = (long *)((long)param_2 + param_3);
    if (uVar2 != 0) {
      _memcpy((void *)((long)param_1 + uVar3 + 0x28),param_2,(ulong)(0x20 - uVar2));
      uVar3 = param_1[1] + param_1[5] * -0x3d4d51c2d82b14b1;
      uVar4 = param_1[2] + param_1[6] * -0x3d4d51c2d82b14b1;
      param_1[1] = (uVar3 >> 0x21 | uVar3 * 0x80000000) * -0x61c8864e7a143579;
      param_1[2] = (uVar4 >> 0x21 | uVar4 * 0x80000000) * -0x61c8864e7a143579;
      uVar3 = param_1[3] + param_1[7] * -0x3d4d51c2d82b14b1;
      uVar4 = param_1[4] + param_1[8] * -0x3d4d51c2d82b14b1;
      param_1[3] = (uVar3 >> 0x21 | uVar3 * 0x80000000) * -0x61c8864e7a143579;
      param_1[4] = (uVar4 >> 0x21 | uVar4 * 0x80000000) * -0x61c8864e7a143579;
      param_2 = (long *)((long)param_2 + (ulong)(0x20 - (int)param_1[9]));
      *(undefined4 *)(param_1 + 9) = 0;
    }
    if (param_2 + 4 <= plVar1) {
      lVar7 = param_1[1];
      lVar9 = param_1[2];
      lVar6 = param_1[3];
      lVar5 = param_1[4];
      do {
        uVar4 = lVar7 + *param_2 * -0x3d4d51c2d82b14b1;
        uVar8 = lVar9 + param_2[1] * -0x3d4d51c2d82b14b1;
        uVar3 = lVar6 + param_2[2] * -0x3d4d51c2d82b14b1;
        lVar7 = (uVar4 >> 0x21 | uVar4 * 0x80000000) * -0x61c8864e7a143579;
        lVar9 = (uVar8 >> 0x21 | uVar8 * 0x80000000) * -0x61c8864e7a143579;
        lVar6 = (uVar3 >> 0x21 | uVar3 * 0x80000000) * -0x61c8864e7a143579;
        uVar3 = lVar5 + param_2[3] * -0x3d4d51c2d82b14b1;
        lVar5 = (uVar3 >> 0x21 | uVar3 * 0x80000000) * -0x61c8864e7a143579;
        param_2 = param_2 + 4;
      } while (param_2 <= plVar1 + -4);
      param_1[1] = lVar7;
      param_1[2] = lVar9;
      param_1[3] = lVar6;
      param_1[4] = lVar5;
    }
    if (plVar1 <= param_2) {
      return 0;
    }
    uVar3 = (long)plVar1 - (long)param_2;
    _memcpy(param_1 + 5,param_2,uVar3);
  }
  *(int *)(param_1 + 9) = (int)uVar3;
  return 0;
}

