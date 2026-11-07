// rea decompile_all
// name: FUN_1006619e0
// address: 0x1006619e0
// body: available
// range: 0x1006619e0-0x100661b57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006619e0(long param_1,undefined1 *param_2,uint param_3)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_2 + 0x10);
  if ((uVar5 | 4) == 0xc) {
    if (*(long *)(param_1 + 0x10) == 0x20) {
      lVar3 = 0;
      FUN_1006790a4();
      _swift_allocObject();
      *(long *)(lVar3 + 0x10) = param_1;
      *(undefined8 *)(lVar3 + 0x18) = 0x20;
      _swift_bridgeObjectRetain(param_1);
      _mlock(param_1 + 0x20,0x20);
      _swift_bridgeObjectRelease(param_1);
      *(undefined8 *)(unaff_x20 + 0x10) = 0x20;
      *(long *)(unaff_x20 + 0x18) = lVar3;
      uVar1 = (param_3 & 0xff00ff00) >> 8 | (param_3 & 0xff00ff) << 8;
      uVar4 = 4;
      FUN_10063a22c(4,uVar1 >> 0x10 | uVar1 << 0x10);
      if (uVar5 == 8) {
        FUN_100004bb4(&DAT_100ab7e50,&DAT_100848d10);
        _swift_initStaticObject();
        FUN_100628ae0();
        FUN_100628ae0(param_2);
      }
      else {
        FUN_100628ae0(param_2);
      }
      *(undefined8 *)(unaff_x20 + 0x20) = uVar4;
    }
    else {
      _swift_bridgeObjectRelease();
      _swift_bridgeObjectRelease();
      FUN_1006631bc();
      _swift_allocError(&DAT_1009e4540,param_2,0,0);
      *param_2 = 0;
      _swift_willThrow();
      _swift_deallocPartialClassInstance();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100661b58);
  (*pcVar2)();
}

