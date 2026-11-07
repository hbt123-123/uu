// rea decompile_all
// name: FUN_100683894
// address: 0x100683894
// body: available
// range: 0x100683894-0x100683b33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100683894(long *param_1,long *param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_c8 [56];
  long local_90;
  long lStack_88;
  byte local_80;
  long local_70;
  long lStack_68;
  byte local_60;
  long local_58;
  
  if (*(char *)((long)unaff_x20 + 0x31) == '\x03') {
    iVar8 = 0;
    bVar2 = false;
    uVar6 = 0;
    lVar5 = 0;
    lVar7 = *(long *)(*unaff_x20 + 0x10);
    bVar3 = true;
  }
  else if (*(char *)((long)unaff_x20 + 0x31) == '\x04') {
    lVar7 = unaff_x20[1];
    bVar1 = *(byte *)(lVar7 + 0x20);
    local_58 = lVar7;
    _swift_bridgeObjectRetain(lVar7);
    lVar5 = lVar7 + 0x40;
    __ss10_HashTableV11startBucketAB0D0Vvg(lVar5,~(-1L << ((ulong)bVar1 & 0x3f)));
    iVar8 = *(int *)(lVar7 + 0x24);
    FUN_100040bb4(&local_58,&DAT_100ab9ea0,&DAT_10084d528);
    if (*(int *)(lVar7 + 0x24) != iVar8) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100683b1c);
      (*pcVar4)();
    }
    bVar2 = true;
    lVar7 = 1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    if (lVar7 < lVar5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100683b20);
      (*pcVar4)();
    }
    bVar3 = false;
    uVar6 = 0x40;
  }
  else {
    lVar7 = 0;
    iVar8 = 0;
    bVar2 = false;
    bVar3 = false;
    lVar5 = 0;
    uVar6 = 0x80;
  }
  lStack_68 = param_2[1];
  local_70 = *param_2;
  local_60 = *(byte *)(param_2 + 2);
  if (local_60 >> 6 == 0) {
    bVar2 = false;
    if (local_70 < lVar5) {
      bVar2 = bVar3;
    }
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100683b24);
      (*pcVar4)();
    }
  }
  else if (local_60 >> 6 == 1 && bVar2) {
    if ((local_60 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100683b30);
      (*pcVar4)();
    }
    if ((int)lStack_68 != iVar8) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100683b28);
      (*pcVar4)();
    }
    if (local_70 < lVar5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1006839d4);
      (*pcVar4)();
    }
  }
  lVar10 = param_2[4];
  lVar9 = param_2[3];
  local_80 = *(byte *)(param_2 + 5);
  local_90 = lVar9;
  lStack_88 = lVar10;
  if (uVar6 >> 6 == 0) {
    if (local_80 < 0x40) {
      FUN_100690ae8();
      if (lVar7 < lVar9) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100683a68);
        (*pcVar4)();
      }
      goto LAB_100683a80;
    }
  }
  else if ((int)(uVar6 >> 6) == 1) {
    if ((local_80 & 0xc0) == 0x40) {
      if ((local_80 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100683b34);
        (*pcVar4)();
      }
      FUN_100690ae8();
      FUN_100690ae8(lVar7,iVar8,uVar6);
      if (iVar8 != (int)lVar10) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100683b2c);
        (*pcVar4)();
      }
      if (lVar7 < lVar9) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100683a48);
        (*pcVar4)();
      }
      goto LAB_100683a80;
    }
    FUN_100690ae8();
    lVar5 = lVar7;
  }
  FUN_100690ae8(lVar5,iVar8,uVar6);
LAB_100683a80:
  lVar5 = *unaff_x20;
  lVar9 = unaff_x20[3];
  lVar7 = unaff_x20[2];
  param_1[7] = unaff_x20[1];
  param_1[6] = lVar5;
  param_1[9] = lVar9;
  param_1[8] = lVar7;
  lVar5 = unaff_x20[4];
  param_1[0xb] = unaff_x20[5];
  param_1[10] = lVar5;
  *(undefined4 *)((long)param_1 + 0x5f) = *(undefined4 *)((long)unaff_x20 + 0x2f);
  param_1[1] = lStack_68;
  *param_1 = local_70;
  *(byte *)(param_1 + 2) = local_60;
  param_1[4] = lStack_88;
  param_1[3] = local_90;
  *(byte *)(param_1 + 5) = local_80;
  FUN_10068e538();
  FUN_10007f314(&local_70,auStack_c8,&DAT_100ab9f40,&DAT_10084d7a8);
  FUN_10007f314(&local_90,auStack_c8,&DAT_100ab9f40,&DAT_10084d7a8);
  return;
}

