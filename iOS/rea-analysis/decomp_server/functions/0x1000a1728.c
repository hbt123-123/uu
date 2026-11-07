// rea decompile_all
// name: FUN_1000a1728
// address: 0x1000a1728
// body: available
// range: 0x1000a1728-0x1000a18bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000a1728(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  void *pvVar6;
  long lVar7;
  long *unaff_x22;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  lVar7 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar7 + 0x48);
  uVar10 = *(undefined8 *)(lVar7 + 0x40);
  uVar2 = *(undefined8 *)(lVar7 + 0x28);
  uVar4 = *(undefined8 *)(lVar7 + 0x30);
  uVar3 = *(undefined8 *)(lVar7 + 0x18);
  lVar9 = *(long *)(lVar7 + 0x20);
  lVar8 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar7 + 0x50));
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(uVar10);
  pcVar5 = *(code **)(lVar9 + 8);
  (*pcVar5)(uVar2,uVar3);
  (*pcVar5)(uVar4,uVar3);
  if (unaff_x20 == 0) {
    if (param_3 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = param_3;
      __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
                (param_3,PTR___ss11AnyHashableVN_100995ad0,PTR___sypN_100995e88 + 8,
                 PTR___ss11AnyHashableVSHsWP_100995ad8);
    }
    pvVar6 = *(void **)(lVar7 + 0x38);
    (**(code **)((long)pvVar6 + 0x10))(pvVar6,param_1,param_2,lVar9,0);
    __Block_release(pvVar6);
    _swift_bridgeObjectRelease(param_3);
  }
  else {
    pvVar6 = *(void **)(lVar7 + 0x38);
    __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF();
    _swift_errorRelease();
    (**(code **)((long)pvVar6 + 0x10))(pvVar6,0,0,0,unaff_x20);
    __Block_release(pvVar6);
  }
  uVar1 = *(undefined8 *)(lVar7 + 0x28);
  _swift_task_dealloc(*(undefined8 *)(lVar7 + 0x30));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001000a18bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar8 + 8))();
  return;
}

