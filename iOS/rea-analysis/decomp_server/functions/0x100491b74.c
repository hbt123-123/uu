// rea decompile_all
// name: FUN_100491b74
// address: 0x100491b74
// body: available
// range: 0x100491b74-0x100491e5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_100491b74(long *param_1,long *param_2)

{
  code *pcVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  int *piVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auStack_b8 [24];
  ulong local_a0;
  long lStack_98;
  ulong local_90;
  ulong local_80;
  long lStack_78;
  ulong local_70;
  
  lVar6 = *param_1;
  lVar8 = *param_2;
  lVar5 = *(long *)(lVar6 + 0x10);
  if (lVar5 == *(long *)(lVar8 + 0x10)) {
    if (lVar5 != 0 && lVar6 != lVar8) {
      piVar7 = (int *)(lVar6 + 0x20);
      piVar9 = (int *)(lVar8 + 0x20);
      do {
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100491e60);
          (*pcVar1)();
        }
        if (*piVar7 != *piVar9) goto LAB_100491dbc;
        piVar7 = piVar7 + 1;
        piVar9 = piVar9 + 1;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    uVar3 = (ulong)(param_1[1] != 0);
    if ((*(byte *)(param_1 + 2) & 1) == 0) {
      uVar3 = param_1[1];
    }
    if ((*(byte *)(param_2 + 2) & 1) == 0) {
      if (uVar3 == param_2[1]) goto LAB_100491c28;
    }
    else if (param_2[1] == 0) {
      if (uVar3 == 0) goto LAB_100491c28;
    }
    else if (uVar3 == 1) {
LAB_100491c28:
      if (((*(byte *)((long)param_1 + 0x11) ^ *(byte *)((long)param_2 + 0x11)) & 1) == 0) {
        uVar3 = param_1[3];
        FUN_100221474(uVar3,param_2[3]);
        if (((uVar3 & 1) != 0) && (((*(byte *)(param_1 + 4) ^ *(byte *)(param_2 + 4)) & 1) == 0)) {
          lVar6 = param_1[8];
          uVar12 = param_1[7];
          uVar10 = param_1[9];
          lVar5 = param_2[8];
          uVar3 = param_2[7];
          uVar11 = param_2[9];
          local_a0 = uVar3;
          lStack_98 = lVar5;
          local_90 = uVar11;
          local_80 = uVar12;
          lStack_78 = lVar6;
          local_70 = uVar10;
          if (uVar10 == 0) {
            if (uVar11 != 0) goto LAB_100491cd8;
            FUN_10007f314(&local_80,auStack_b8,&DAT_100aa1160,&DAT_10082f550);
            FUN_10007f314(&local_a0,auStack_b8,&DAT_100aa1160,&DAT_10082f550);
            FUN_10008f148(uVar12,lVar6,0);
LAB_100491e2c:
            lVar5 = param_1[5];
            FUN_1000094a4(lVar5,param_1[6],param_2[5],param_2[6]);
            uVar2 = (uint)lVar5;
            goto LAB_100491dc0;
          }
          if (uVar11 == 0) {
LAB_100491cd8:
            FUN_10007f314(&local_80,auStack_b8,&DAT_100aa1160,&DAT_10082f550);
            FUN_10007f314(&local_a0,auStack_b8,&DAT_100aa1160,&DAT_10082f550);
            FUN_10008f148(uVar12,lVar6,uVar10);
LAB_100491d2c:
            FUN_10008f148(uVar3,lVar5,uVar11);
          }
          else {
            if (uVar10 == uVar11) {
              FUN_10007f314(&local_80,auStack_b8,&DAT_100aa1160,&DAT_10082f550);
              FUN_10007f314(&local_a0,auStack_b8,&DAT_100aa1160,&DAT_10082f550);
            }
            else {
              FUN_10007f314(&local_80,auStack_b8,&DAT_100aa1160,&DAT_10082f550);
              FUN_10007f314(&local_a0,auStack_b8,&DAT_100aa1160,&DAT_10082f550);
              _swift_retain(uVar10);
              _swift_retain(uVar11);
              uVar4 = uVar10;
              FUN_10048cb28(uVar10,uVar11);
              _swift_release(uVar11);
              _swift_release(uVar10);
              if ((uVar4 & 1) == 0) {
                FUN_10008f148(uVar3,lVar5,uVar11);
                uVar3 = uVar12;
                lVar5 = lVar6;
                uVar11 = uVar10;
                goto LAB_100491d2c;
              }
            }
            uVar4 = uVar12;
            FUN_1000094a4(uVar12,lVar6,uVar3,lVar5);
            FUN_10008f148(uVar3,lVar5,uVar11);
            FUN_10008f148(uVar12,lVar6,uVar10);
            if ((uVar4 & 1) != 0) goto LAB_100491e2c;
          }
        }
      }
    }
  }
LAB_100491dbc:
  uVar2 = 0;
LAB_100491dc0:
  return uVar2 & 1;
}

