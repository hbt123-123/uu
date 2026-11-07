// rea decompile_all
// name: FUN_1004476ac
// address: 0x1004476ac
// body: available
// range: 0x1004476ac-0x10044781f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1004476ac(long *param_1,uint *param_2)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long local_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long local_60;
  long lStack_58;
  uint local_50;
  byte local_4c;
  long local_48;
  ulong uStack_40;
  ulong local_38;
  long lStack_30;
  ulong local_28;
  long lStack_20;
  undefined4 local_18;
  byte local_14;
  
  local_48 = *param_1;
  uStack_40 = param_1[1];
  uVar5 = param_1[2];
  lStack_30 = param_1[3];
  local_28 = param_1[4];
  bVar2 = *(byte *)((long)param_1 + 0x34) >> 6;
  if (bVar2 == 0) {
    local_18 = (undefined4)param_1[6];
    lStack_20 = param_1[5];
    local_14 = *(byte *)((long)param_1 + 0x34) & 0x3f;
    local_4c = (byte)param_2[0xd];
    if (local_4c >> 6 == 0) {
      local_50 = param_2[0xc];
      lStack_78 = *(long *)(param_2 + 2);
      local_80 = *(long *)param_2;
      lStack_68 = *(long *)(param_2 + 6);
      lStack_70 = *(long *)(param_2 + 4);
      lStack_58 = *(long *)(param_2 + 10);
      local_60 = *(long *)(param_2 + 8);
      plVar4 = &local_48;
      local_38 = uVar5;
      FUN_1004475e0(plVar4,&local_80);
      uVar3 = (uint)plVar4;
      goto LAB_100447810;
    }
  }
  else if (bVar2 == 1) {
    if ((param_2[0xd] & 0xc0) == 0x40) {
      lVar1 = *(long *)param_2;
      uVar6 = *(ulong *)(param_2 + 8);
      if ((*(ulong *)(param_2 + 2) & 1) == 0) {
        if (local_48 == lVar1) goto LAB_1004477d8;
      }
      else if (lVar1 == 0) {
        if (local_48 == 0) goto LAB_1004477d8;
      }
      else if (lVar1 == 1) {
        if (local_48 == 1) {
LAB_1004477d8:
          if ((*(ulong *)(param_2 + 2) ^ uStack_40) >> 0x20 == 0) {
            if ((local_28 >> 0x20 & 1) == 0) {
              if (((uVar6 >> 0x20 & 1) == 0) && ((int)local_28 == (int)uVar6)) {
LAB_1004477fc:
                FUN_1000094a4(uVar5,lStack_30,*(long *)(param_2 + 4),*(long *)(param_2 + 6));
                goto joined_r0x0001004477b0;
              }
            }
            else if ((uVar6 >> 0x20 & 1) != 0) goto LAB_1004477fc;
          }
        }
      }
      else if (local_48 == 2) goto LAB_1004477d8;
    }
  }
  else if (((param_2[0xd] & 0xc0) == 0x80) && ((((uint)local_48 ^ *param_2) & 1) == 0)) {
    FUN_1000094a4(uStack_40,uVar5,*(long *)(param_2 + 2),*(long *)(param_2 + 4));
    uVar5 = uStack_40;
joined_r0x0001004477b0:
    if ((uVar5 & 1) != 0) {
      uVar3 = 1;
      goto LAB_100447810;
    }
  }
  uVar3 = 0;
LAB_100447810:
  return uVar3 & 1;
}

