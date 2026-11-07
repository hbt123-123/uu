// rea decompile_all
// name: FUN_1005420a0
// address: 0x1005420a0
// body: available
// range: 0x1005420a0-0x1005421a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1005420a0(void *param_1,void *param_2)

{
  long lVar1;
  code *pcVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x20;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_58 [24];
  
  pvVar3 = param_2;
  _swift_slowAlloc(param_2,0xffffffffffffffff);
  if (param_1 != (void *)0x0) {
    if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005421a4);
      (*pcVar2)();
    }
    _memmove(pvVar3,param_1,(size_t)param_2);
  }
  _swift_beginAccess(unaff_x20 + 0x10,auStack_58,0x21,0);
  uVar6 = *(ulong *)(unaff_x20 + 0x10);
  uVar4 = uVar6;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(unaff_x20 + 0x10) = uVar6;
  uVar5 = uVar6;
  if ((uVar4 & 1) == 0) {
    uVar5 = 0;
    FUN_100506e84(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
    *(ulong *)(unaff_x20 + 0x10) = uVar5;
  }
  uVar4 = *(ulong *)(uVar5 + 0x10);
  uVar6 = uVar5;
  if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar4) {
    uVar6 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
    FUN_100506e84(uVar6,uVar4 + 1,1,uVar5);
  }
  *(ulong *)(uVar6 + 0x10) = uVar4 + 1;
  lVar1 = uVar6 + uVar4 * 0x10;
  *(void **)(lVar1 + 0x20) = pvVar3;
  *(long *)(lVar1 + 0x28) = (long)pvVar3 + (long)param_2;
  *(ulong *)(unaff_x20 + 0x10) = uVar6;
  _swift_endAccess(auStack_58);
  auVar7._8_8_ = (long)pvVar3 + (long)param_2;
  auVar7._0_8_ = pvVar3;
  return auVar7;
}

