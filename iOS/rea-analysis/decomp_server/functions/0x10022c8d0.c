// rea decompile_all
// name: FUN_10022c8d0
// address: 0x10022c8d0
// body: available
// range: 0x10022c8d0-0x10022ca0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10022c8d0(void)

{
  long lVar1;
  pid_t pVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_48 [24];
  
  if (DAT_100a7ef38 == '\x01') {
    if (DAT_100a7de00 != -1) {
      _swift_once(&DAT_100a7de00,FUN_10022c42c);
    }
    _swift_beginAccess(&DAT_100a7ef40,auStack_48,0,0);
    lVar1 = DAT_100a7ef40;
    lVar6 = *(long *)(DAT_100a7ef40 + 0x10);
    if (lVar6 != 0) {
      lVar5 = DAT_100a7ef40 + 0x20;
      _swift_bridgeObjectRetain(DAT_100a7ef40);
      do {
        FUN_10003f030(lVar5,*(undefined8 *)(lVar5 + 0x18));
        FUN_10022eff4();
        lVar5 = lVar5 + 0x28;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      _swift_bridgeObjectRelease(lVar1);
    }
    uVar3 = 0;
    _NSSetUncaughtExceptionHandler(0);
    __s6Darwin7SIG_DFLys5Int32VXCSgvg();
    uVar4 = 6;
    _signal(6,uVar3);
    __s6Darwin7SIG_DFLys5Int32VXCSgvg();
    uVar3 = 4;
    _signal(4,uVar4);
    __s6Darwin7SIG_DFLys5Int32VXCSgvg();
    uVar4 = 0xb;
    _signal(0xb,uVar3);
    __s6Darwin7SIG_DFLys5Int32VXCSgvg();
    uVar3 = 8;
    _signal(8,uVar4);
    __s6Darwin7SIG_DFLys5Int32VXCSgvg();
    uVar4 = 10;
    _signal(10,uVar3);
    __s6Darwin7SIG_DFLys5Int32VXCSgvg();
    uVar3 = 0xd;
    _signal(0xd,uVar4);
    __s6Darwin7SIG_DFLys5Int32VXCSgvg();
    _signal(0x1e,uVar3);
    pVar2 = _getpid();
    _kill(pVar2,9);
  }
  return;
}

