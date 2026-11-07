// rea decompile_all
// name: FUN_10055db34
// address: 0x10055db34
// body: available
// range: 0x10055db34-0x10055dc43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10055db34(undefined1 *param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  code *pcVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined1 uVar8;
  long unaff_x20;
  
  lVar4 = *(long *)(unaff_x20 + 0x50) + -1;
  if (SBORROW8(*(long *)(unaff_x20 + 0x50),1)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10055dc44);
    (*pcVar5)();
  }
  *(long *)(unaff_x20 + 0x50) = lVar4;
  if (lVar4 < 0) {
    uVar8 = 0xb;
    goto LAB_10055dbfc;
  }
  pbVar7 = *(byte **)(unaff_x20 + 0x28);
  pbVar1 = *(byte **)(unaff_x20 + 0x30);
  if (pbVar7 != pbVar1) {
    pbVar6 = pbVar7 + 1;
    bVar2 = *pbVar7;
    *(byte **)(unaff_x20 + 0x28) = pbVar6;
    do {
      if ((pbVar6 == pbVar1) || (bVar3 = *pbVar6, 0x23 < bVar3)) goto LAB_10055dbd8;
      if ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0) {
        if ((ulong)bVar3 != 0x23) goto LAB_10055dbd8;
        pbVar7 = pbVar6 + 1;
        do {
          pbVar6 = pbVar1;
          if (pbVar7 == pbVar1) break;
          pbVar6 = pbVar7 + 1;
          bVar3 = *pbVar7;
          pbVar7 = pbVar6;
        } while (bVar3 != 10 && bVar3 != 0xd);
      }
      else {
        pbVar6 = pbVar6 + 1;
      }
      *(byte **)(unaff_x20 + 0x28) = pbVar6;
    } while( true );
  }
  goto LAB_10055dbf8;
LAB_10055dbd8:
  if (bVar2 == 0x3c) {
    return;
  }
  if (bVar2 == 0x7b) {
    return;
  }
LAB_10055dbf8:
  uVar8 = 0;
LAB_10055dbfc:
  FUN_1004f9b10();
  _swift_allocError(&DAT_1009d1c98,param_1,0,0);
  *param_1 = uVar8;
  _swift_willThrow();
  return;
}

