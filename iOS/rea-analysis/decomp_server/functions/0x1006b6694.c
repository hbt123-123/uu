// rea decompile_all
// name: FUN_1006b6694
// address: 0x1006b6694
// body: available
// range: 0x1006b6694-0x1006b674b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1006b6694(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ushort uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_1 == (undefined8 *)0x0) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar3 = NEON_umaxv(CONCAT26(-(ushort)((int)((ulong)param_2[1] >> 0x20) - 0x1fU < 0xffffffe2),
                                CONCAT24(-(ushort)((int)param_2[1] - 0x1fU < 0xffffffe7),
                                         CONCAT22(-(ushort)((int)((ulong)*param_2 >> 0x20) - 0x1fU <
                                                           0xffffffe7),
                                                  -(ushort)((int)*param_2 - 0x20U < 0xffffffea)))),2
                      );
    uVar2 = 0xffffffffffffffd6;
    if ((((uVar3 & 1) == 0) && (0xfffffffa < *(int *)(param_2 + 2) - 8U)) &&
       (*(uint *)((long)param_2 + 0x14) < 0x20001)) {
      if (*(int *)(param_2 + 3) - 1U < 9) {
        param_1[0xf] = 0;
        param_1[0xe] = 0;
        param_1[0x11] = 0;
        param_1[0x10] = 0;
        param_1[0xb] = 0;
        param_1[10] = 0;
        param_1[0xd] = 0;
        param_1[0xc] = 0;
        param_1[7] = 0;
        param_1[6] = 0;
        param_1[9] = 0;
        param_1[8] = 0;
        param_1[3] = 0;
        param_1[2] = 0;
        param_1[5] = 0;
        param_1[4] = 0;
        param_1[1] = 0;
        *param_1 = 0;
        uVar4 = param_2[1];
        uVar2 = *param_2;
        uVar5 = *(undefined8 *)((long)param_2 + 0xc);
        param_1[3] = *(undefined8 *)((long)param_2 + 0x14);
        param_1[2] = uVar5;
        *(undefined8 *)((long)param_1 + 0xc) = uVar4;
        *(undefined8 *)((long)param_1 + 4) = uVar2;
        uVar1 = *(undefined4 *)((long)param_2 + 0x24);
        param_1[4] = *(undefined8 *)((long)param_2 + 0x1c);
        *(undefined4 *)(param_1 + 5) = uVar1;
        *(undefined4 *)((long)param_1 + 0x2c) = 3;
        return 0;
      }
      return 0xffffffffffffffd6;
    }
  }
  return uVar2;
}

