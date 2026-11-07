// rea decompile_all
// name: FUN_100197f20
// address: 0x100197f20
// body: available
// range: 0x100197f20-0x10019811b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100197f20(ulong param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  code *pcVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  uint uVar10;
  int iVar11;
  long unaff_x20;
  undefined1 auVar12 [16];
  undefined1 auStack_70 [16];
  long local_60;
  ulong uStack_58;
  
  if ((-1 < (long)param_1) && (uVar6 = param_1, FUN_100194728(), (long)param_1 < (long)uVar6)) {
    FUN_10019478c();
    uVar4 = (uint)(param_2 >> 0x20);
    uVar10 = uVar4 >> 0x1e;
    if (uVar4 >> 0x1e < 2) {
      if (uVar10 == 0) {
        FUN_100006cdc();
        if ((param_2 & 0xff000000000000) != 0) {
LAB_100197fa4:
          if (param_1 >> 0x2e != 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100198110);
            (*pcVar5)();
          }
          lVar7 = param_1 * 0x20000;
          uVar6 = lVar7 + 0x20000;
          if (SCARRY8(lVar7,0x20000)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100198114);
            (*pcVar5)();
          }
          plVar1 = (long *)(unaff_x20 +
                           _TtC14UURemoteServer28ClipboardUploadCopyOperation::
                           ___lazy_storage___blockData);
          lVar2 = *plVar1;
          uVar4 = (uint)((ulong)plVar1[1] >> 0x20);
          uVar10 = uVar4 >> 0x1e;
          if (uVar4 >> 0x1e < 2) {
            if (uVar10 == 0) {
              uVar9 = (ulong)plVar1[1] >> 0x30 & 0xff;
            }
            else {
              iVar11 = (int)((ulong)lVar2 >> 0x20);
              if (SBORROW4(iVar11,(int)lVar2)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x10019811c);
                (*pcVar5)();
              }
              uVar9 = (ulong)(iVar11 - (int)lVar2);
            }
LAB_10019802c:
            if ((long)uVar6 <= (long)uVar9) {
              uVar9 = uVar6;
            }
          }
          else {
            if (uVar10 == 2) {
              uVar9 = *(long *)(lVar2 + 0x18) - *(long *)(lVar2 + 0x10);
              if (SBORROW8(*(long *)(lVar2 + 0x18),*(long *)(lVar2 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x10019801c);
                (*pcVar5)();
              }
              goto LAB_10019802c;
            }
            uVar9 = uVar6 & (long)uVar6 >> 0x3f;
          }
          uVar8 = 0;
          FUN_100401b14(0);
          (*(code *)PTR____chkstk_darwin_100995498)(uVar8);
          local_60 = lVar7;
          uStack_58 = uVar9;
          FUN_1003fb45c(FUN_100198a08,auStack_70,0xd0000000000000b0,0x8000000100899320,
                        0xd000000000000016,0x8000000100899450,0xaa,7);
          if ((long)uVar9 < lVar7) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100198118);
            (*pcVar5)();
          }
          lVar2 = *plVar1;
          lVar3 = plVar1[1];
          FUN_100008184(lVar2,lVar3);
          __s10Foundation4DataV7subdata2inACSnySiG_tF(lVar7,uVar9,lVar2,lVar3);
          FUN_100006cc8(lVar2,lVar3);
          goto LAB_100197fec;
        }
      }
      else {
        FUN_100006cdc();
        if ((long)(int)uVar6 != (long)uVar6 >> 0x20) goto LAB_100197fa4;
      }
    }
    else if (uVar10 == 2) {
      lVar7 = *(long *)(uVar6 + 0x10);
      lVar2 = *(long *)(uVar6 + 0x18);
      FUN_100006cdc();
      if (lVar7 != lVar2) goto LAB_100197fa4;
    }
    else {
      FUN_100006cdc();
    }
  }
  lVar7 = 0;
  uVar9 = 0xc000000000000000;
LAB_100197fec:
  auVar12._8_8_ = uVar9;
  auVar12._0_8_ = lVar7;
  return auVar12;
}

