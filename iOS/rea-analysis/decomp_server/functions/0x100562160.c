// rea decompile_all
// name: FUN_100562160
// address: 0x100562160
// body: available
// range: 0x100562160-0x100562437 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010056236c) */

void FUN_100562160(undefined1 *param_1,undefined1 *param_2)

{
  long lVar1;
  byte bVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  byte *pbVar7;
  long unaff_x20;
  long unaff_x21;
  byte *pbVar8;
  
  FUN_10055db34();
  if (unaff_x21 == 0) {
    pbVar6 = *(byte **)(unaff_x20 + 0x28);
    pbVar8 = *(byte **)(unaff_x20 + 0x30);
    puVar4 = param_1;
    if (pbVar6 != pbVar8) {
LAB_1005621a8:
      if ((uint)*pbVar6 == ((uint)param_1 & 0xff)) {
        *(byte **)(unaff_x20 + 0x28) = pbVar6 + 1;
        FUN_100560bb8();
        lVar1 = *(long *)(unaff_x20 + 0x50) + 1;
        if (SCARRY8(*(long *)(unaff_x20 + 0x50),1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100562438);
          (*pcVar3)();
        }
        *(long *)(unaff_x20 + 0x50) = lVar1;
        if (lVar1 <= *(long *)(unaff_x20 + 0x40)) {
          return;
        }
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd00000000000003f,0x80000001008bcf30,
                   "SwiftProtobuf/TextFormatScanner.swift",0x25,2,0x119,0);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100562434);
        (*pcVar3)();
      }
      puVar4 = (undefined1 *)0x1;
      FUN_10055efd0();
      if (param_2 != (undefined1 *)0x0) {
        puVar5 = param_2;
        _swift_bridgeObjectRelease();
        pbVar6 = *(byte **)(unaff_x20 + 0x28);
        do {
          if ((pbVar6 == pbVar8) || (bVar2 = *pbVar6, 0x23 < bVar2)) goto LAB_100562244;
          if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
            if ((ulong)bVar2 != 0x23) goto LAB_100562244;
            pbVar7 = pbVar6 + 1;
            do {
              if (pbVar7 == pbVar8) {
                *(byte **)(unaff_x20 + 0x28) = pbVar8;
                pbVar6 = pbVar8;
                goto LAB_100562244;
              }
              pbVar6 = pbVar7 + 1;
              bVar2 = *pbVar7;
              pbVar7 = pbVar6;
            } while (bVar2 != 10 && bVar2 != 0xd);
          }
          else {
            pbVar6 = pbVar6 + 1;
          }
          *(byte **)(unaff_x20 + 0x28) = pbVar6;
        } while( true );
      }
    }
LAB_100562370:
    FUN_1004f9b10();
    _swift_allocError(&DAT_1009d1c98,puVar4,0,0);
    *puVar4 = 0;
    _swift_willThrow();
  }
  return;
LAB_100562244:
  if ((pbVar6 != pbVar8) && (*pbVar6 == 0x3a)) {
    do {
      pbVar6 = pbVar6 + 1;
LAB_10056225c:
      *(byte **)(unaff_x20 + 0x28) = pbVar6;
      if ((pbVar6 == pbVar8) || (bVar2 = *pbVar6, 0x23 < bVar2)) {
LAB_1005622b8:
        puVar4 = param_2;
        if (pbVar6 == pbVar8) goto LAB_100562370;
        if ((*pbVar6 == 0x3c) || (*pbVar6 == 0x7b)) goto LAB_1005622d4;
        param_2 = (undefined1 *)0x1;
        FUN_100561e84();
        goto LAB_1005622dc;
      }
    } while ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) != 0);
    if ((ulong)bVar2 != 0x23) goto LAB_1005622b8;
    pbVar7 = pbVar6 + 1;
    do {
      pbVar6 = pbVar8;
      if (pbVar7 == pbVar8) break;
      pbVar6 = pbVar7 + 1;
      bVar2 = *pbVar7;
      pbVar7 = pbVar6;
    } while (bVar2 != 10 && bVar2 != 0xd);
    goto LAB_10056225c;
  }
LAB_1005622d4:
  FUN_100562160();
LAB_1005622dc:
  pbVar6 = *(byte **)(unaff_x20 + 0x28);
  pbVar8 = *(byte **)(unaff_x20 + 0x30);
  if ((pbVar6 != pbVar8) && ((*pbVar6 == 0x3b || (*pbVar6 == 0x2c)))) {
    do {
      pbVar6 = pbVar6 + 1;
LAB_100562300:
      *(byte **)(unaff_x20 + 0x28) = pbVar6;
      if ((pbVar6 == pbVar8) || (bVar2 = *pbVar6, 0x23 < bVar2)) goto LAB_1005621a0;
    } while ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) != 0);
    if ((ulong)bVar2 != 0x23) goto LAB_1005621a0;
    pbVar7 = pbVar6 + 1;
    while (pbVar6 = pbVar8, pbVar7 != pbVar8) {
      pbVar6 = pbVar7 + 1;
      bVar2 = *pbVar7;
      if ((bVar2 == 10) || (pbVar7 = pbVar6, bVar2 == 0xd)) break;
    }
    goto LAB_100562300;
  }
LAB_1005621a0:
  puVar4 = param_2;
  param_2 = puVar5;
  if (pbVar6 == pbVar8) goto LAB_100562370;
  goto LAB_1005621a8;
}

