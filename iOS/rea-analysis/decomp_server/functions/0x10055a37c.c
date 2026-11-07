// rea decompile_all
// name: FUN_10055a37c
// address: 0x10055a37c
// body: available
// range: 0x10055a37c-0x10055a557 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10055a37c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong *unaff_x20;
  ulong uVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined1 auStack_e0 [8];
  
  lVar6 = *(long *)(param_3 + -8);
  puVar8 = auStack_e0 + -(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100557a54(param_2);
  lVar9 = param_1;
  __sSa8endIndexSivg(param_1,param_3);
  if (lVar9 == 0) {
    _swift_bridgeObjectRelease(param_2);
  }
  else {
    lVar9 = 0;
    do {
      __sSayxSicig(puVar8,lVar9,param_1,param_3);
      lVar1 = lVar9 + 1;
      if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10055a558);
        (*pcVar2)();
      }
      _swift_bridgeObjectRetain(unaff_x20[1]);
      FUN_1004fa13c();
      _swift_bridgeObjectRetain(param_2);
      FUN_1004fa13c();
      FUN_1004f9e80(": ",2);
      FUN_100556504(puVar8,param_3,param_4);
      uVar7 = *unaff_x20;
      uVar3 = uVar7;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar5 = uVar7;
      if ((uVar3 & 1) == 0) {
        uVar5 = 0;
        FUN_100506f84(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
      }
      uVar3 = *(ulong *)(uVar5 + 0x10);
      uVar7 = uVar5;
      if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar3) {
        uVar7 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
        FUN_100506f84(uVar7,uVar3 + 1,1,uVar5);
      }
      *(ulong *)(uVar7 + 0x10) = uVar3 + 1;
      *(undefined1 *)(uVar7 + uVar3 + 0x20) = 10;
      (**(code **)(lVar6 + 8))(puVar8,param_3);
      *unaff_x20 = uVar7;
      lVar4 = param_1;
      __sSa8endIndexSivg(param_1,param_3);
      lVar9 = lVar9 + 1;
    } while (lVar1 != lVar4);
    _swift_bridgeObjectRelease(param_2);
  }
  return;
}

