// rea decompile_all
// name: FUN_100669cb0
// address: 0x100669cb0
// body: available
// range: 0x100669cb0-0x100669f47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100669de0) */
/* WARNING: Removing unreachable block (ram,0x000100669efc) */

long FUN_100669cb0(long param_1,uint param_2,ulong param_3,long param_4)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  
  if (param_1 < 2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100669ef4);
    (*pcVar2)();
  }
  FUN_1006697d4(param_4,param_2 & 1);
  puVar1 = PTR___swiftEmptyArrayStorage_100995ea0;
  param_1 = param_1 + -2;
  if (param_1 != 0) {
    lVar3 = param_4;
    do {
      lVar5 = 0;
      param_4 = lVar3;
      if ((param_2 & 1) == 0) {
        FUN_100669640();
        _swift_initStackObject();
        *(undefined **)(lVar5 + 0x10) = puVar1;
        *(undefined8 *)(lVar5 + 0x18) = 0;
        puVar4 = &DAT_100ab7cb8;
        FUN_100004bb4(&DAT_100ab7cb8,&DAT_100848cc0);
        puVar6 = puVar4;
        _swift_initStaticObject();
        *(undefined **)(lVar5 + 0x20) = puVar6;
        puVar6 = puVar4;
        _swift_initStaticObject(puVar4,&DAT_100ab1170);
        *(undefined **)(lVar5 + 0x28) = puVar6;
        _swift_initStaticObject(puVar4,&DAT_100ab1298);
        *(undefined **)(lVar5 + 0x30) = puVar4;
        _swift_bridgeObjectRetain();
        FUN_100668e34();
        _swift_bridgeObjectRelease(lVar3);
        _swift_setDeallocating(lVar5);
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar5 + 0x10));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar5 + 0x20));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar5 + 0x28));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar5 + 0x30));
      }
      else {
        FUN_1006730b4();
        _swift_initStackObject();
        *(undefined **)(lVar5 + 0x10) = puVar1;
        *(undefined8 *)(lVar5 + 0x18) = 0;
        puVar4 = &DAT_100ab7cb8;
        FUN_100004bb4(&DAT_100ab7cb8,&DAT_100848cc0);
        _swift_initStaticObject();
        *(undefined **)(lVar5 + 0x20) = puVar4;
        _swift_bridgeObjectRetain();
        FUN_1006727b8();
        _swift_release(lVar5);
        _swift_bridgeObjectRelease(lVar3);
      }
      _swift_bridgeObjectRelease(lVar3);
      param_1 = param_1 + -1;
      lVar3 = param_4;
    } while (param_1 != 0);
  }
  if (-1 < (long)param_3) {
    if (param_3 <= *(ulong *)(param_4 + 0x10)) {
      lVar3 = param_4;
      if (*(ulong *)(param_4 + 0x10) != param_3) {
        thunk_FUN_100629d98(param_4,param_4 + 0x20,0,param_3 << 1 | 1);
        _swift_bridgeObjectRelease(param_4);
      }
      return lVar3;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100669efc);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100669ef8);
  (*pcVar2)();
}

