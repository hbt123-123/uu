// rea decompile_all
// name: FUN_100407ee4
// address: 0x100407ee4
// body: available
// range: 0x100407ee4-0x100408033 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100407ee4(char *param_1,long param_2)

{
  char cVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  ID IVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 auVar9 [16];
  
  puVar4 = &_OBJC_CLASS___NSMutableString;
  _objc_allocWithZone();
  pcVar8 = "init";
  IVar5 = _objc_msgSend((ID)puVar4,"init");
  if (-1 < param_2) {
    if (param_2 != 0) {
      FUN_100408034(0);
      puVar2 = PTR___ss5UInt8Vs7CVarArgsWP_100995d68;
      puVar4 = PTR___ss5UInt8VN_100995d40;
      do {
        pcVar6 = "%02x";
        __sSo8NSStringC10FoundationE13stringLiteralABs12StaticStringV_tcfC("%02x",4,2);
        pcVar7 = &DAT_100a766e8;
        FUN_100004bb4(&DAT_100a766e8,&DAT_10080b1e0);
        _swift_allocObject();
        pcVar7[0x18] = '\x02';
        pcVar7[0x19] = '\0';
        pcVar7[0x1a] = '\0';
        pcVar7[0x1b] = '\0';
        pcVar7[0x1c] = '\0';
        pcVar7[0x1d] = '\0';
        pcVar7[0x1e] = '\0';
        pcVar7[0x1f] = '\0';
        pcVar7[0x10] = '\x01';
        pcVar7[0x11] = '\0';
        pcVar7[0x12] = '\0';
        pcVar7[0x13] = '\0';
        pcVar7[0x14] = '\0';
        pcVar7[0x15] = '\0';
        pcVar7[0x16] = '\0';
        pcVar7[0x17] = '\0';
        cVar1 = *param_1;
        *(undefined **)(pcVar7 + 0x38) = puVar4;
        *(undefined **)(pcVar7 + 0x40) = puVar2;
        pcVar7[0x20] = cVar1;
        pcVar8 = pcVar7;
        __sSo15NSMutableStringC10FoundationE12appendFormatyySo8NSStringC_s7CVarArg_pdtF
                  (pcVar6,pcVar7);
        _swift_bridgeObjectRelease(pcVar7);
        param_2 = param_2 + -1;
        param_1 = param_1 + 1;
      } while (param_2 != 0);
    }
    __sSS10FoundationEySSSo8NSStringCcfC(IVar5);
    pcVar6 = pcVar8;
    __sSS10lowercasedSSyF();
    _swift_bridgeObjectRelease(pcVar8);
    auVar9._8_8_ = pcVar6;
    auVar9._0_8_ = IVar5;
    return auVar9;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100408034);
  (*pcVar3)();
}

