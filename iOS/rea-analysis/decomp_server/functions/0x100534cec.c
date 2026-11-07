// rea decompile_all
// name: FUN_100534cec
// address: 0x100534cec
// body: available
// range: 0x100534cec-0x100534f2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100534cec(undefined8 *param_1,long param_2,long param_3,long param_4,long *param_5)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  char cVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  if (param_2 - (long)param_1 < 1) {
    return;
  }
  uVar4 = 0;
  lVar5 = 0;
  lVar1 = 0;
  if (param_3 != 0) {
    lVar1 = param_4 - param_3;
  }
  lVar10 = *param_5;
  do {
    uVar12 = (ulong)*(byte *)(param_3 + lVar10);
    uVar9 = *(ulong *)(&DAT_100aa8ce8 + uVar12 * 8);
    lVar6 = lVar10;
    while ((long)uVar9 < 0) {
      lVar7 = lVar6 + 1;
      iVar11 = (int)uVar12;
      if (iVar11 != 0x20) {
        if (iVar11 == 0x22) {
          if (lVar5 == 0) {
            return;
          }
          if (lVar5 == 3) {
            *(char *)param_1 = (char)(uVar4 >> 10);
            *(char *)((long)param_1 + 1) = (char)(uVar4 >> 2);
            return;
          }
          if (lVar5 == 2) {
            *(char *)param_1 = (char)(uVar4 >> 4);
            return;
          }
          goto LAB_100534ed4;
        }
        if (iVar11 != 0x5c) {
          if (iVar11 != 0x3d) goto LAB_100534ed4;
          uVar12 = 0;
          cVar8 = '=';
          goto LAB_100534e18;
        }
        if ((lVar6 < 0) || (lVar1 <= lVar6)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100534f30);
          (*pcVar2)();
        }
        *param_5 = lVar7;
        lVar6 = lVar7;
        uVar9 = DAT_100aa8e60;
        if (*(char *)(param_3 + lVar7) != '/') goto LAB_100534ed4;
        break;
      }
      if ((lVar10 < 0) || (lVar1 <= lVar6)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100534f1c);
        (*pcVar2)();
      }
      *param_5 = lVar7;
      uVar12 = (ulong)*(byte *)(param_3 + lVar7);
      lVar6 = lVar7;
      uVar9 = *(ulong *)(&DAT_100aa8ce8 + uVar12 * 8);
    }
    bVar3 = SCARRY8(lVar5,1);
    lVar5 = lVar5 + 1;
    if (bVar3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100534f28);
      (*pcVar2)();
    }
    uVar4 = uVar9 | uVar4 << 6;
    if (lVar5 == 4) {
      lVar5 = 0;
      *(char *)param_1 = (char)(uVar4 >> 0x10);
      *(char *)((long)param_1 + 1) = (char)(uVar4 >> 8);
      *(char *)((long)param_1 + 2) = (char)uVar4;
      param_1 = (undefined8 *)((long)param_1 + 3);
      lVar6 = *param_5;
      uVar4 = 0;
    }
    if ((lVar6 < 0) || (lVar1 <= lVar6)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100534f2c);
      (*pcVar2)();
    }
    lVar10 = lVar6 + 1;
    *param_5 = lVar10;
  } while( true );
LAB_100534e18:
  do {
    if (cVar8 != ' ') {
      if (cVar8 != '=') goto LAB_100534ed4;
      bVar3 = SCARRY8(uVar12,1);
      uVar12 = uVar12 + 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100534f24);
        (*pcVar2)();
      }
    }
    if ((lVar6 < 0) || (lVar1 <= lVar7 + -1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100534f20);
      (*pcVar2)();
    }
    *param_5 = lVar7;
    cVar8 = *(char *)(param_3 + lVar7);
    lVar7 = lVar7 + 1;
  } while (cVar8 != '\"');
  if (lVar5 == 0) {
    if (uVar12 == 0) {
      return;
    }
  }
  else if (lVar5 == 2) {
    *(char *)param_1 = (char)(uVar4 >> 4);
    if ((uVar12 | 2) == 2) {
      return;
    }
  }
  else if (lVar5 == 3) {
    *(char *)param_1 = (char)(uVar4 >> 10);
    *(char *)((long)param_1 + 1) = (char)(uVar4 >> 2);
    if (uVar12 < 2) {
      return;
    }
  }
LAB_100534ed4:
  FUN_1004f98e4();
  _swift_allocError(&DAT_1009d03a0,param_1,0,0);
  param_1[1] = 5;
  *param_1 = 0;
  _swift_willThrow();
  return;
}

