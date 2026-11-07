// rea decompile_all
// name: FUN_10063a264
// address: 0x10063a264
// body: available
// range: 0x10063a264-0x10063a427 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10063a264(undefined8 *param_1,long param_2,code *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  
  lVar7 = *(long *)(unaff_x20 + 8);
  if (*(long *)(lVar7 + 0x10) == param_2) {
    lVar6 = *(long *)(unaff_x20 + 0x10);
    FUN_10063a808();
    FUN_10063a808();
    _swift_retain(param_4);
    FUN_10063a808();
    if (lVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10063a424);
      (*pcVar2)();
    }
    lVar3 = lVar7;
    FUN_10063a544(lVar7,lVar6);
    lVar4 = lVar7;
    _swift_release();
    FUN_10063a850();
    _swift_allocObject();
    FUN_10063a460(lVar3);
    lVar6 = *(long *)(lVar4 + 0x10);
    uVar1 = *(undefined8 *)(lVar4 + 0x18);
    _swift_retain(lVar4);
    _swift_bridgeObjectRetain(lVar6);
    thunk_FUN_10066690c(uVar1,8);
    FUN_100628ae0();
    _swift_release(lVar4);
    lVar3 = lVar6;
    (*param_3)(lVar6,lVar6 + 0x20,0,*(long *)(lVar6 + 0x10) << 1 | 1);
    _swift_bridgeObjectRelease(lVar6);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10063a428);
      (*pcVar2)();
    }
    FUN_10063a870();
    param_1[3] = &DAT_1009e27a0;
    param_1[4] = &PTR_PTR_1009e27f8;
    puVar5 = &DAT_1009e25e8;
    _swift_allocObject(&DAT_1009e25e8,0x50,7);
    *param_1 = puVar5;
    *(code **)(puVar5 + 0x10) = param_3;
    *(undefined8 *)(puVar5 + 0x18) = param_4;
    *(undefined8 *)(puVar5 + 0x20) = 0;
    *(long *)(puVar5 + 0x28) = lVar7;
    *(long *)(puVar5 + 0x30) = lVar4;
    *(long *)(puVar5 + 0x38) = param_2;
    *(long *)(puVar5 + 0x40) = lVar3;
    *(undefined8 *)(puVar5 + 0x48) = 0;
  }
  else {
    FUN_10063a7c8();
    _swift_allocError(&DAT_1009e2728,param_2,0,0);
    _swift_willThrow();
  }
  return;
}

