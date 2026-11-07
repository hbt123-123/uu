// rea decompile_all
// name: FUN_1000a43dc
// address: 0x1000a43dc
// body: available
// range: 0x1000a43dc-0x1000a4537 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000a43dc(undefined8 *param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long *plVar7;
  
  uVar3 = param_3;
  FUN_1000a2ee0(0);
  puVar6 = PTR___swiftEmptyArrayStorage_1000f0740;
  lVar5 = *(long *)(param_2 + 0x10);
  if (lVar5 == 0) {
    FUN_10002c9fc(FUN_100096178);
    puVar6 = PTR___swiftEmptyArrayStorage_1000f0740;
  }
  else {
    _swift_bridgeObjectRetain(param_2);
    FUN_1000798d0(0,lVar5,0);
    plVar7 = (long *)(param_2 + 0x28);
    do {
      lVar2 = plVar7[-1];
      lVar4 = *plVar7;
      (**(code **)(lVar4 + 0x18))();
      uVar1 = *(ulong *)(puVar6 + 0x10);
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
        FUN_1000798d0(1 < *(ulong *)(puVar6 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(puVar6 + 0x10) = uVar1 + 1;
      *(long *)(puVar6 + uVar1 * 0x10 + 0x20) = lVar2;
      *(long *)(puVar6 + uVar1 * 0x10 + 0x28) = lVar4;
      plVar7 = plVar7 + 2;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    _swift_bridgeObjectRelease(param_2);
    FUN_10002c9fc(FUN_100096178,uVar3,1);
  }
  *param_1 = puVar6;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = param_2;
  *(char *)(param_1 + 7) = (char)param_3;
  return;
}

