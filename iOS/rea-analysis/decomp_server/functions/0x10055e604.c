// rea decompile_all
// name: FUN_10055e604
// address: 0x10055e604
// body: available
// range: 0x10055e604-0x10055e867 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10055e604(undefined1 *param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  long lVar5;
  byte *pbVar6;
  long unaff_x20;
  uint unaff_w23;
  uint uVar7;
  
  pbVar3 = *(byte **)(unaff_x20 + 0x28);
  pbVar1 = *(byte **)(unaff_x20 + 0x30);
  do {
    if ((pbVar3 == pbVar1) || (bVar2 = *pbVar3, 0x23 < bVar2)) break;
    if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
      if ((ulong)bVar2 != 0x23) break;
      pbVar4 = pbVar3 + 1;
      do {
        pbVar3 = pbVar1;
        if (pbVar4 == pbVar1) break;
        pbVar3 = pbVar4 + 1;
        bVar2 = *pbVar4;
        pbVar4 = pbVar3;
      } while (bVar2 != 10 && bVar2 != 0xd);
    }
    else {
      pbVar3 = pbVar3 + 1;
    }
    *(byte **)(unaff_x20 + 0x28) = pbVar3;
  } while( true );
  if (pbVar3 != pbVar1) {
    pbVar4 = pbVar3 + 1;
    bVar2 = *pbVar3;
    *(byte **)(unaff_x20 + 0x28) = pbVar4;
    if (bVar2 < 0x54) {
      if (bVar2 != 0x30) {
        if (bVar2 != 0x31) {
          if (bVar2 == 0x46) goto LAB_10055e748;
          goto LAB_10055e824;
        }
        goto LAB_10055e7c0;
      }
LAB_10055e7d8:
      unaff_w23 = 0;
      uVar7 = 0;
    }
    else {
      if (bVar2 != 0x54) {
        if (bVar2 == 0x66) {
LAB_10055e748:
          if (pbVar4 != pbVar1) {
            param_1 = &DAT_100aaa100;
            FUN_100004bb4(&DAT_100aaa100,&DAT_1008386b0);
            _swift_initStaticObject();
            pbVar3 = *(byte **)(unaff_x20 + 0x28);
            lVar5 = *(long *)(param_1 + 0x10);
            pbVar4 = pbVar3;
            if (lVar5 != 0) {
              pbVar6 = param_1 + 0x20;
              do {
                if ((pbVar4 == *(byte **)(unaff_x20 + 0x30)) || (*pbVar4 != *pbVar6)) {
                  *(byte **)(unaff_x20 + 0x28) = pbVar3;
                  pbVar4 = pbVar3;
                  break;
                }
                pbVar4 = pbVar4 + 1;
                *(byte **)(unaff_x20 + 0x28) = pbVar4;
                pbVar6 = pbVar6 + 1;
                lVar5 = lVar5 + -1;
              } while (lVar5 != 0);
            }
          }
          goto LAB_10055e7d8;
        }
        if (bVar2 != 0x74) goto LAB_10055e824;
      }
      if (pbVar4 != pbVar1) {
        param_1 = &DAT_100aaa100;
        FUN_100004bb4(&DAT_100aaa100,&DAT_1008386b0);
        _swift_initStaticObject();
        pbVar3 = *(byte **)(unaff_x20 + 0x28);
        lVar5 = *(long *)(param_1 + 0x10);
        pbVar4 = pbVar3;
        if (lVar5 != 0) {
          pbVar6 = param_1 + 0x20;
          do {
            if ((pbVar4 == *(byte **)(unaff_x20 + 0x30)) || (*pbVar4 != *pbVar6)) {
              *(byte **)(unaff_x20 + 0x28) = pbVar3;
              pbVar4 = pbVar3;
              break;
            }
            pbVar4 = pbVar4 + 1;
            *(byte **)(unaff_x20 + 0x28) = pbVar4;
            pbVar6 = pbVar6 + 1;
            lVar5 = lVar5 + -1;
          } while (lVar5 != 0);
        }
      }
LAB_10055e7c0:
      unaff_w23 = 1;
      uVar7 = 1;
    }
    if (pbVar4 == pbVar1) goto LAB_10055e850;
    bVar2 = *pbVar4;
    if (((bVar2 < 0x3f && (1L << ((ulong)bVar2 & 0x3f) & 0x4800100900002600U) != 0) ||
        (bVar2 == 0x7d)) || (bVar2 == 0x5d)) {
      FUN_100560bb8();
      uVar7 = unaff_w23;
      goto LAB_10055e850;
    }
  }
LAB_10055e824:
  FUN_1004f9b10();
  _swift_allocError(&DAT_1009d1c98,param_1,0,0);
  *param_1 = 0;
  _swift_willThrow();
  uVar7 = unaff_w23;
LAB_10055e850:
  return uVar7 & 1;
}

