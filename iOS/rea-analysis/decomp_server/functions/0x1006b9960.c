// rea decompile_all
// name: FUN_1006b9960
// address: 0x1006b9960
// body: available
// range: 0x1006b9960-0x1006b9b6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1006b9960(undefined8 param_1,long param_2,int param_3,undefined8 param_4,long *param_5,
                   long *param_6)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  long local_70;
  undefined8 uStack_68;
  long local_60;
  
  if ((*param_6 == 0) != (param_6[1] == 0)) {
    return 0;
  }
  if ((int)param_5[3] == 1) {
    lVar4 = 0;
  }
  else {
    lVar4 = 4L << ((ulong)*(uint *)((long)param_5 + 4) & 0x3f);
  }
  lVar6 = 0x2b40;
  if (param_3 != 1) {
    lVar6 = (param_2 + 7U & 0xfffffffffffffff8) + 0x2b40;
  }
  uVar3 = lVar6 + lVar4 + (4L << ((ulong)*(uint *)(param_5 + 1) & 0x3f));
  local_90 = *param_6;
  uStack_88 = (undefined4)param_6[1];
  uStack_84 = (undefined4)((ulong)param_6[1] >> 0x20);
  local_80 = (undefined4)param_6[2];
  uStack_7c = (undefined4)((ulong)param_6[2] >> 0x20);
  uVar2 = uVar3;
  FUN_1006b17b4(uVar3,&local_90);
  if (uVar2 == 0) {
    local_90 = *param_6;
    uStack_88 = (undefined4)param_6[1];
    uStack_84 = (undefined4)((ulong)param_6[1] >> 0x20);
    lVar4 = param_6[2];
  }
  else {
    lVar4 = uVar2 + 0x1340;
    *(ulong *)(uVar2 + 0x18) = uVar2;
    *(ulong *)(uVar2 + 0x20) = uVar2 + uVar3;
    *(long *)(uVar2 + 0x28) = lVar4;
    *(long *)(uVar2 + 0x30) = lVar4;
    *(long *)(uVar2 + 0x38) = lVar4;
    *(ulong *)(uVar2 + 0x40) = uVar2 + uVar3;
    *(undefined8 *)(uVar2 + 0x48) = 0;
    *(undefined8 *)(uVar2 + 0x50) = 0;
    lVar6 = param_6[1];
    lVar4 = *param_6;
    *(long *)(uVar2 + 0x1330) = param_6[2];
    *(long *)(uVar2 + 0x1328) = lVar6;
    *(long *)(uVar2 + 0x1320) = lVar4;
    *(undefined4 *)(uVar2 + 0x133c) = 0;
    local_90 = *param_5;
    uStack_88 = (undefined4)param_5[1];
    uStack_7c = (undefined4)*(undefined8 *)((long)param_5 + 0x14);
    uStack_78 = (undefined4)((ulong)*(undefined8 *)((long)param_5 + 0x14) >> 0x20);
    uStack_84 = (undefined4)*(undefined8 *)((long)param_5 + 0xc);
    local_80 = (undefined4)((ulong)*(undefined8 *)((long)param_5 + 0xc) >> 0x20);
    uVar3 = uVar2;
    FUN_1006b9b70();
    if (uVar3 < 0xffffffffffffff89) {
      return uVar2;
    }
    plVar1 = (long *)(uVar2 + 0x1320);
    uStack_68 = *(undefined8 *)(uVar2 + 0x1328);
    local_70 = *plVar1;
    local_60 = *(long *)(uVar2 + 0x1330);
    uVar3 = *(ulong *)(uVar2 + 0x18);
    if (uVar2 < uVar3) {
      *(undefined8 *)(uVar2 + 0x50) = 0;
      *(undefined8 *)(uVar2 + 0x48) = 0;
      *(undefined8 *)(uVar2 + 0x40) = 0;
      *(undefined8 *)(uVar2 + 0x38) = 0;
      *(undefined8 *)(uVar2 + 0x30) = 0;
      *(undefined8 *)(uVar2 + 0x28) = 0;
      *(undefined8 *)(uVar2 + 0x20) = 0;
      *(undefined8 *)(uVar2 + 0x18) = 0;
      local_90 = *plVar1;
      uStack_88 = (undefined4)*(undefined8 *)(uVar2 + 0x1328);
      uStack_84 = (undefined4)((ulong)*(undefined8 *)(uVar2 + 0x1328) >> 0x20);
      local_80 = (undefined4)*(undefined8 *)(uVar2 + 0x1330);
      uStack_7c = (undefined4)((ulong)*(undefined8 *)(uVar2 + 0x1330) >> 0x20);
      FUN_1006b1828(uVar3,&local_90);
    }
    else {
      uVar5 = *(ulong *)(uVar2 + 0x20);
      *(undefined8 *)(uVar2 + 0x50) = 0;
      *(undefined8 *)(uVar2 + 0x48) = 0;
      *(undefined8 *)(uVar2 + 0x40) = 0;
      *(undefined8 *)(uVar2 + 0x38) = 0;
      *(undefined8 *)(uVar2 + 0x30) = 0;
      *(undefined8 *)(uVar2 + 0x28) = 0;
      *(undefined8 *)(uVar2 + 0x20) = 0;
      *(undefined8 *)(uVar2 + 0x18) = 0;
      local_90 = *plVar1;
      uStack_88 = (undefined4)*(undefined8 *)(uVar2 + 0x1328);
      uStack_84 = (undefined4)((ulong)*(undefined8 *)(uVar2 + 0x1328) >> 0x20);
      local_80 = (undefined4)*(undefined8 *)(uVar2 + 0x1330);
      uStack_7c = (undefined4)((ulong)*(undefined8 *)(uVar2 + 0x1330) >> 0x20);
      FUN_1006b1828(uVar3,&local_90);
      if (uVar2 <= uVar5) {
        return 0;
      }
    }
    uStack_88 = (undefined4)uStack_68;
    uStack_84 = (undefined4)((ulong)uStack_68 >> 0x20);
    local_90 = local_70;
    lVar4 = local_60;
  }
  local_80 = (undefined4)lVar4;
  uStack_7c = (undefined4)((ulong)lVar4 >> 0x20);
  FUN_1006b1828();
  return 0;
}

