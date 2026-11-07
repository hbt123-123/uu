// rea decompile_all
// name: FUN_10055efd0
// address: 0x10055efd0
// body: available
// range: 0x10055efd0-0x10055f2b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10055efd0(undefined1 *param_1,long param_2)

{
  byte *pbVar1;
  byte bVar2;
  code *pcVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  long unaff_x20;
  long unaff_x21;
  long lVar7;
  
  pbVar6 = *(byte **)(unaff_x20 + 0x28);
  pbVar1 = *(byte **)(unaff_x20 + 0x30);
  do {
    if ((pbVar6 == pbVar1) || (bVar2 = *pbVar6, 0x23 < bVar2)) goto LAB_10055f058;
    if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
      if ((ulong)bVar2 != 0x23) {
LAB_10055f058:
        if (pbVar6 != pbVar1) {
          bVar2 = *pbVar6;
          if (bVar2 == 0x5b) {
            if (((ulong)param_1 & 1) != 0) {
              FUN_100561d78();
              if (unaff_x21 != 0) {
                return;
              }
              __sSS6appendyySSF();
              _swift_bridgeObjectRelease(param_2);
              __sSS6appendyySSF(0x5d,0xe100000000000000);
              return;
            }
            FUN_1004f9b10();
            _swift_allocError(&DAT_1009d1c98,param_1,0,0);
            *param_1 = 7;
          }
          else {
            if (0xffffffe5 < (bVar2 & 0xffffffdf) - 0x5b) {
              FUN_100560c30();
              if (param_1 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x10055f2b0);
                (*pcVar3)();
              }
              param_2 = param_2 - (long)param_1;
              FUN_10054c680();
              if (param_2 != 0) {
                return;
              }
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10055f2b4);
              (*pcVar3)();
            }
            if (0xfffffff6 < bVar2 - 0x3a) {
              pbVar5 = pbVar6 + 1;
              pbVar4 = pbVar1;
              if (((((((pbVar5 == pbVar1) || (pbVar4 = pbVar5, *pbVar5 - 0x3a < 0xfffffff6)) ||
                     (pbVar5 = pbVar6 + 2, pbVar4 = pbVar1, pbVar5 == pbVar1)) ||
                    ((pbVar4 = pbVar5, *pbVar5 - 0x3a < 0xfffffff6 ||
                     (pbVar5 = pbVar6 + 3, pbVar4 = pbVar1, pbVar5 == pbVar1)))) ||
                   ((pbVar4 = pbVar5, *pbVar5 - 0x3a < 0xfffffff6 ||
                    ((pbVar5 = pbVar6 + 4, pbVar4 = pbVar1, pbVar5 == pbVar1 ||
                     (pbVar4 = pbVar5, *pbVar5 - 0x3a < 0xfffffff6)))))) ||
                  (pbVar5 = pbVar6 + 5, pbVar4 = pbVar1, pbVar5 == pbVar1)) ||
                 (((((pbVar4 = pbVar5, *pbVar5 - 0x3a < 0xfffffff6 ||
                     (pbVar5 = pbVar6 + 6, pbVar4 = pbVar1, pbVar5 == pbVar1)) ||
                    (pbVar4 = pbVar5, *pbVar5 - 0x3a < 0xfffffff6)) ||
                   (((pbVar5 = pbVar6 + 7, pbVar4 = pbVar1, pbVar5 == pbVar1 ||
                     (pbVar4 = pbVar5, *pbVar5 - 0x3a < 0xfffffff6)) ||
                    ((pbVar5 = pbVar6 + 8, pbVar4 = pbVar1, pbVar5 == pbVar1 ||
                     ((pbVar4 = pbVar5, *pbVar5 - 0x3a < 0xfffffff6 ||
                      (pbVar5 = pbVar6 + 9, pbVar4 = pbVar1, pbVar5 == pbVar1)))))))) ||
                  (pbVar4 = pbVar5, *pbVar5 - 0x3a < 0xfffffff6)))) {
                *(byte **)(unaff_x20 + 0x28) = pbVar4;
                lVar7 = (long)pbVar4 - (long)pbVar6;
                FUN_100560bb8();
                FUN_10054c680(pbVar6);
                if (lVar7 != 0) {
                  return;
                }
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x10055f2b8);
                (*pcVar3)();
              }
              *(byte **)(unaff_x20 + 0x28) = pbVar6 + 10;
            }
            FUN_1004f9b10();
            _swift_allocError(&DAT_1009d1c98,param_1,0,0);
            *param_1 = 0;
          }
          _swift_willThrow();
        }
        return;
      }
      pbVar5 = pbVar6 + 1;
      do {
        pbVar6 = pbVar1;
        if (pbVar5 == pbVar1) break;
        pbVar6 = pbVar5 + 1;
        bVar2 = *pbVar5;
        pbVar5 = pbVar6;
      } while (bVar2 != 10 && bVar2 != 0xd);
    }
    else {
      pbVar6 = pbVar6 + 1;
    }
    *(byte **)(unaff_x20 + 0x28) = pbVar6;
  } while( true );
}

