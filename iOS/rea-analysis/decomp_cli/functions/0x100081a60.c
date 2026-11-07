// rea decompile_all
// name: FUN_100081a60
// address: 0x100081a60
// body: available
// range: 0x100081a60-0x100081c7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100081a60(ulong *param_1,ulong param_2)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  ulong uVar5;
  ulong local_90 [9];
  ulong local_48;
  
  uVar4 = *unaff_x20;
  if ((uVar4 & 0xc000000000000001) == 0) {
    __ss6HasherV5_seedABSi_tcfC(local_90,*(undefined8 *)(uVar4 + 0x28));
    uVar5 = param_2;
    __ss6HasherV8_combineyySuF();
    __ss6HasherV9_finalizeSiyF();
    uVar3 = -1L << ((ulong)*(byte *)(uVar4 + 0x20) & 0x3f);
    uVar5 = uVar5 & (uVar3 ^ 0xffffffffffffffff);
    if ((*(ulong *)(uVar4 + 0x38 + (uVar5 >> 3 & 0xffffffffffffff8)) >> (uVar5 & 0x3f) & 1) != 0) {
      do {
        if (*(ulong *)(*(long *)(uVar4 + 0x30) + uVar5 * 8) == param_2) {
          _swift_release(param_2);
          *param_1 = *(ulong *)(*(long *)(uVar4 + 0x30) + uVar5 * 8);
          _swift_retain();
          return 0;
        }
        uVar5 = uVar5 + 1 & ~uVar3;
      } while ((*(ulong *)(uVar4 + 0x38 + (uVar5 >> 3 & 0xffffffffffffff8)) >> (uVar5 & 0x3f) & 1)
               != 0);
    }
    _swift_isUniquelyReferenced_nonNull_native(*unaff_x20);
    local_90[0] = *unaff_x20;
    _swift_retain(param_2);
    FUN_10008230c();
    *unaff_x20 = local_90[0];
  }
  else {
    uVar5 = uVar4 & 0xffffffffffffff8;
    if ((long)uVar4 < 0) {
      uVar5 = uVar4;
    }
    _swift_retain(param_2);
    _swift_bridgeObjectRetain(uVar4);
    uVar3 = param_2;
    __ss10__CocoaSetV6member3foryXlSgyXl_tF(param_2,uVar5);
    _swift_release(param_2);
    if (uVar3 != 0) {
      _swift_bridgeObjectRelease(uVar4);
      _swift_release(param_2);
      puVar2 = &DAT_100104458;
      local_48 = uVar3;
      FUN_10000eb08(&DAT_100104458,&DAT_1000d48f0);
      _swift_dynamicCast(local_90,&local_48,PTR___syXlN_1000f0720 + 8,puVar2,7);
      *param_1 = local_90[0];
      return 0;
    }
    uVar3 = uVar5;
    __ss10__CocoaSetV5countSivg();
    if (SCARRY8(uVar3,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100081c7c);
      (*pcVar1)();
    }
    FUN_100081c7c(uVar5,uVar3 + 1);
    uVar3 = *(ulong *)(uVar5 + 0x10);
    local_90[0] = uVar5;
    if (uVar3 < *(ulong *)(uVar5 + 0x18)) {
      _swift_retain(param_2);
    }
    else {
      _swift_retain(param_2);
      FUN_100083280(uVar3 + 1);
      uVar5 = local_90[0];
    }
    FUN_100083604(param_2,uVar5);
    _swift_bridgeObjectRelease(uVar4);
    *unaff_x20 = uVar5;
  }
  *param_1 = param_2;
  return 1;
}

