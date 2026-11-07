// rea decompile_all
// name: FUN_100526d80
// address: 0x100526d80
// body: available
// range: 0x100526d80-0x100527087 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100526d80(ulong *param_1)

{
  long lVar1;
  char *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  code *pcVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  char *pcVar10;
  undefined8 *unaff_x20;
  long unaff_x21;
  long *plVar11;
  char *pcVar12;
  ulong uVar13;
  
  FUN_100535660();
  plVar11 = unaff_x20 + 2;
  lVar9 = *plVar11;
  puVar3 = (undefined8 *)*unaff_x20;
  lVar4 = unaff_x20[1];
  if (puVar3 == (undefined8 *)0x0) {
    if (lVar9 != 0) goto LAB_100526dcc;
  }
  else if (lVar9 != lVar4 - (long)puVar3) {
LAB_100526dcc:
    if (*(char *)((long)puVar3 + lVar9) == 'n') {
      uVar6 = 0;
      FUN_100004bb4(&DAT_100aaa100,&DAT_1008386b0);
      _swift_initStaticObject();
      FUN_100536178();
      if ((uVar6 & 1) != 0) {
        return;
      }
    }
  }
  puVar7 = (undefined8 *)0x5b;
  FUN_1005363c8();
  if (unaff_x21 != 0) {
    return;
  }
  FUN_100535660();
  pcVar10 = (char *)unaff_x20[2];
  if (puVar3 == (undefined8 *)0x0) {
    if (pcVar10 != (char *)0x0) goto LAB_100526e64;
    FUN_100535660();
    pcVar10 = (char *)unaff_x20[2];
  }
  else {
    pcVar12 = (char *)(lVar4 - (long)puVar3);
    if (pcVar10 == pcVar12) {
      FUN_100535660();
      if ((char *)unaff_x20[2] != pcVar12) goto LAB_100526ec0;
      goto LAB_100527024;
    }
LAB_100526e64:
    if (*(char *)((long)puVar3 + (long)pcVar10) == ']') {
      lVar9 = 0;
      if (puVar3 != (undefined8 *)0x0) {
        lVar9 = lVar4 - (long)puVar3;
      }
      if (((long)pcVar10 < 0) || (lVar9 <= (long)pcVar10)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100527084);
        (*pcVar5)();
      }
LAB_100526e8c:
      *plVar11 = (long)(pcVar10 + 1);
      return;
    }
    FUN_100535660();
    pcVar10 = (char *)unaff_x20[2];
    if (puVar3 != (undefined8 *)0x0) {
      pcVar12 = (char *)(lVar4 - (long)puVar3);
      if (pcVar10 != pcVar12) goto LAB_100526ec0;
      goto LAB_100527024;
    }
  }
  if (pcVar10 != (char *)0x0) {
    pcVar12 = (char *)(lVar4 - (long)puVar3);
LAB_100526ec0:
    pcVar2 = (char *)0x0;
    if (puVar3 != (undefined8 *)0x0) {
      pcVar2 = pcVar12;
    }
    puVar7 = puVar3;
    lVar9 = lVar4;
    FUN_100534adc(puVar3,lVar4,plVar11);
    do {
      uVar13 = *param_1;
      FUN_100008184(puVar7,lVar9);
      uVar6 = uVar13;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar8 = uVar13;
      if ((uVar6 & 1) == 0) {
        uVar8 = 0;
        FUN_1005077e0(0,*(long *)(uVar13 + 0x10) + 1,1,uVar13);
      }
      uVar6 = *(ulong *)(uVar8 + 0x10);
      uVar13 = uVar8;
      if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar6) {
        uVar13 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
        FUN_1005077e0(uVar13,uVar6 + 1,1,uVar8);
      }
      *(ulong *)(uVar13 + 0x10) = uVar6 + 1;
      lVar1 = uVar13 + uVar6 * 0x10;
      *(undefined8 **)(lVar1 + 0x20) = puVar7;
      *(long *)(lVar1 + 0x28) = lVar9;
      *param_1 = uVar13;
      FUN_100535660();
      pcVar10 = (char *)unaff_x20[2];
      if (puVar3 == (undefined8 *)0x0) {
        if ((pcVar10 != (char *)0x0) && (*pcVar10 == ']')) {
          pcVar12 = (char *)0x0;
          goto LAB_100527060;
        }
      }
      else if ((pcVar10 != pcVar12) && (*(char *)((long)puVar3 + (long)pcVar10) == ']')) {
LAB_100527060:
        FUN_100006cdc(puVar7,lVar9);
        if (((long)pcVar10 < 0) || ((long)pcVar12 <= (long)pcVar10)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100527088);
          (*pcVar5)();
        }
        goto LAB_100526e8c;
      }
      FUN_1005363c8(0x2c);
      FUN_100006cdc(puVar7,lVar9);
      FUN_100535660();
      if (puVar3 == (undefined8 *)0x0) {
        if ((char *)unaff_x20[2] == (char *)0x0) break;
      }
      else if ((char *)unaff_x20[2] == pcVar12) break;
      puVar7 = puVar3;
      lVar9 = lVar4;
      FUN_100534adc(puVar3,lVar4,plVar11,pcVar2);
    } while( true );
  }
LAB_100527024:
  FUN_1004f98e4();
  _swift_allocError(&DAT_1009d03a0,puVar7,0,0);
  puVar7[1] = 0xd;
  *puVar7 = 0;
  _swift_willThrow();
  return;
}

