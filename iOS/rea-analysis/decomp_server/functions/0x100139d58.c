// rea decompile_all
// name: FUN_100139d58
// address: 0x100139d58
// body: available
// range: 0x100139d58-0x100139ef7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100139d58(code *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  long unaff_x21;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong local_70;
  undefined8 local_68;
  
  if (param_3 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_3 & 0xffffffffffffff8;
    if ((long)param_3 < 0) {
      uVar5 = param_3;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  puVar2 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (uVar5 != 0) {
    FUN_10006ffec(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100139ee4);
      (*pcVar4)();
    }
    uVar6 = 0;
    do {
      uVar1 = uVar6 + 1;
      if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100139ec4);
        (*pcVar4)();
      }
      if ((param_3 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_3 & 0xffffffffffffff8) + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100139ec8);
          (*pcVar4)();
        }
        uVar7 = *(ulong *)(param_3 + uVar6 * 8 + 0x20);
        _swift_retain(uVar7);
      }
      else {
        uVar7 = uVar6;
        FUN_10016a034(uVar6,param_3);
      }
      local_70 = uVar7;
      (*param_1)(&local_68,&local_70);
      if (unaff_x21 != 0) {
        _swift_release(puVar2);
        _swift_release(uVar7);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100139ef8);
        (*pcVar4)();
      }
      _swift_release(uVar7);
      uVar3 = local_68;
      uVar7 = *(ulong *)(puVar2 + 0x10);
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar7) {
        FUN_10006ffec(1 < *(ulong *)(puVar2 + 0x18),uVar7 + 1,1);
      }
      *(ulong *)(puVar2 + 0x10) = uVar7 + 1;
      *(undefined8 *)(puVar2 + uVar7 * 8 + 0x20) = uVar3;
      uVar6 = uVar6 + 1;
    } while (uVar1 != uVar5);
  }
  return puVar2;
}

