// rea decompile_all
// name: FUN_1006ba05c
// address: 0x1006ba05c
// body: available
// range: 0x1006ba05c-0x1006ba153 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1006ba05c(ulong param_1,ulong param_2,undefined8 param_3,long param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 *param_7)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 uStack_2c;
  
  if (*(int *)(param_7 + 3) == 1) {
    lVar6 = 0;
  }
  else {
    lVar6 = 4L << ((ulong)*(uint *)((long)param_7 + 4) & 0x3f);
  }
  lVar2 = 0x2b40;
  if ((int)param_5 != 1) {
    lVar2 = (param_4 + 7U & 0xfffffffffffffff8) + 0x2b40;
  }
  if ((param_1 & 7) == 0) {
    uVar5 = 0;
    if ((0x133f < (long)param_2) && (param_1 != 0)) {
      uVar3 = *(uint *)(param_7 + 1);
      *(ulong *)(param_1 + 0x18) = param_1;
      *(ulong *)(param_1 + 0x20) = param_1 + param_2;
      lVar1 = param_1 + 0x1340;
      *(long *)(param_1 + 0x28) = lVar1;
      *(long *)(param_1 + 0x30) = lVar1;
      *(long *)(param_1 + 0x38) = lVar1;
      *(ulong *)(param_1 + 0x40) = param_1 + param_2;
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined8 *)(param_1 + 0x50) = 0;
      if (param_2 < (ulong)(lVar6 + lVar2 + (4L << ((ulong)uVar3 & 0x3f)))) {
        return 0;
      }
      local_40 = *param_7;
      uStack_38 = (undefined4)param_7[1];
      uStack_2c = *(undefined8 *)((long)param_7 + 0x14);
      uStack_34 = (undefined4)*(undefined8 *)((long)param_7 + 0xc);
      uStack_30 = (undefined4)((ulong)*(undefined8 *)((long)param_7 + 0xc) >> 0x20);
      uVar4 = param_1;
      FUN_1006b9b70(param_1,param_3,param_4,param_5,param_6,&local_40);
      uVar5 = param_1;
      if (0xffffffffffffff88 < uVar4) {
        uVar5 = 0;
      }
    }
    return uVar5;
  }
  return 0;
}

