// rea decompile_all
// name: FUN_1002bba74
// address: 0x1002bba74
// body: available
// range: 0x1002bba74-0x1002bbbd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002bba74(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong *unaff_x20;
  ulong uVar6;
  
  uVar6 = *unaff_x20;
  lVar2 = param_1;
  uVar3 = param_2;
  FUN_1002bbc2c(param_1,param_2,uVar6);
  if ((uVar3 & 1) == 0) {
    puVar4 = &DAT_100a833e8;
    FUN_100004bb4(&DAT_100a833e8,&DAT_1008178c0);
    _swift_initStackObject();
    *(undefined8 *)(puVar4 + 0x18) = 2;
    *(undefined8 *)(puVar4 + 0x10) = 1;
    *(long *)(puVar4 + 0x20) = param_1;
    *(ulong *)(puVar4 + 0x28) = param_2;
    *(undefined8 *)(puVar4 + 0x30) = param_3;
    *(undefined8 *)(puVar4 + 0x38) = param_4;
    if (SCARRY8(lVar2,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1002bbbd8);
      (*pcVar1)();
    }
    _swift_bridgeObjectRetain(param_2);
    _swift_bridgeObjectRetain(param_4);
    FUN_1002c0f64(lVar2,lVar2 + 1,puVar4);
    _swift_setDeallocating(puVar4);
    _swift_arrayDestroy(puVar4 + 0x20,*(undefined8 *)(puVar4 + 0x10),&DAT_1009ad080);
  }
  else {
    _swift_bridgeObjectRetain(param_2);
    _swift_bridgeObjectRetain(param_4);
    uVar3 = uVar6;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar5 = uVar6;
    if ((uVar3 & 1) == 0) {
      uVar5 = 0;
      FUN_1002966ec(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
    }
    uVar3 = *(ulong *)(uVar5 + 0x10);
    uVar6 = uVar5;
    if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar3) {
      uVar6 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
      FUN_1002966ec(uVar6,uVar3 + 1,1,uVar5);
    }
    *(ulong *)(uVar6 + 0x10) = uVar3 + 1;
    lVar2 = uVar6 + uVar3 * 0x20;
    *(long *)(lVar2 + 0x20) = param_1;
    *(ulong *)(lVar2 + 0x28) = param_2;
    *(undefined8 *)(lVar2 + 0x30) = param_3;
    *(undefined8 *)(lVar2 + 0x38) = param_4;
    *unaff_x20 = uVar6;
  }
  return;
}

