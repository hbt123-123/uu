// rea decompile_all
// name: FUN_1006bd3a8
// address: 0x1006bd3a8
// body: available
// range: 0x1006bd3a8-0x1006bd673 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint * FUN_1006bd3a8(void *param_1,void *param_2,uint param_3,int param_4,uint *param_5,
                    uint *param_6,void *param_7,ulong param_8,undefined8 param_9,undefined8 param_10
                    ,undefined4 param_11)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  uint *puVar9;
  int local_64;
  
  uVar5 = param_3 - 1;
  if (param_3 < 8) {
    uVar5 = 6;
  }
  puVar9 = (uint *)0x3;
  if (0x3ff < param_8) {
    puVar9 = (uint *)0x4;
  }
  if ((param_8 & 0xffffffffffffc000) != 0) {
    puVar9 = (uint *)((long)puVar9 + 1);
  }
  _memcpy(param_2,param_1,0x404);
  iVar8 = (int)param_8;
  if (param_4 == 0) {
    iVar2 = *(int *)((long)param_1 + 0x400);
    uVar7 = 6;
    if (iVar2 != 2) {
      uVar7 = 0x3f;
    }
    if (uVar7 < param_8) {
      lVar3 = (long)param_6 - (long)puVar9;
      if (param_6 < puVar9 || lVar3 == 0) {
        return (uint *)0xffffffffffffffba;
      }
      bVar1 = param_3 < 4 && param_8 < 0x401;
      local_64 = iVar2;
      if ((iVar2 != 2 || puVar9 != (uint *)0x3) && 0xff < param_8) {
        uVar7 = (long)param_5 + (long)puVar9;
        FUN_1006b5ef4(uVar7,lVar3,param_7,param_8,0xff,0xb,param_9,param_10,param_2,&local_64,bVar1,
                      param_11);
      }
      else {
        uVar7 = (long)param_5 + (long)puVar9;
        FUN_1006b5e04(uVar7,lVar3,param_7,param_8,0xff,0xb,param_9,param_10,param_2,&local_64,bVar1,
                      param_11);
      }
      uVar6 = 2;
      if (local_64 != 0) {
        uVar6 = 3;
      }
      if ((uVar7 < (param_8 - (param_8 >> ((ulong)uVar5 & 0x3f))) - 2) &&
         (uVar7 - 1 < 0xffffffffffffff88)) {
        if (uVar7 != 1) {
          if (local_64 == 0) {
            *(undefined4 *)((long)param_2 + 0x400) = 1;
          }
          iVar4 = (int)uVar7;
          if (puVar9 == (uint *)0x5) {
            *param_5 = iVar4 * 0x400000 + iVar8 * 0x10 | uVar6 | 0xc;
            *(char *)(param_5 + 1) = (char)(uVar7 >> 10);
          }
          else if (puVar9 == (uint *)0x4) {
            *param_5 = iVar4 * 0x40000 + iVar8 * 0x10 | uVar6 | 8;
          }
          else {
            uVar5 = 4;
            if ((iVar2 != 2 || puVar9 != (uint *)0x3) && 0xff < param_8) {
              uVar5 = 0;
            }
            iVar8 = ((uVar6 | uVar5 | iVar8 << 4) ^ 4) + iVar4 * 0x4000;
            *(short *)param_5 = (short)iVar8;
            *(char *)((long)param_5 + 2) = (char)((uint)iVar8 >> 0x10);
          }
          return (uint *)(uVar7 + (long)puVar9);
        }
        _memcpy(param_2,param_1,0x404);
        FUN_1006bd330(param_5);
        return param_5;
      }
      _memcpy(param_2,param_1,0x404);
      goto LAB_1006bd420;
    }
    uVar7 = 1;
    if (0x1f < param_8) {
      uVar7 = 2;
    }
    puVar9 = (uint *)(uVar7 + param_8);
    if (param_6 < puVar9) {
      return (uint *)0xffffffffffffffba;
    }
    if (0x1f < param_8) goto LAB_1006bd450;
  }
  else {
LAB_1006bd420:
    uVar5 = 1;
    if (0x1f < param_8) {
      uVar5 = 2;
    }
    if (0xfff < param_8) {
      uVar5 = uVar5 + 1;
    }
    uVar7 = (ulong)uVar5;
    puVar9 = (uint *)(uVar7 + param_8);
    if (param_6 < puVar9) {
      return (uint *)0xffffffffffffffba;
    }
    if (uVar5 == 3) {
      *param_5 = iVar8 << 4 | 0xc;
      goto LAB_1006bd528;
    }
    if (uVar5 == 2) {
LAB_1006bd450:
      *(ushort *)param_5 = (ushort)(iVar8 << 4) | 4;
      goto LAB_1006bd528;
    }
  }
  *(char *)param_5 = (char)(iVar8 << 3);
LAB_1006bd528:
  _memcpy((void *)((long)param_5 + uVar7),param_7,param_8);
  return puVar9;
}

