// rea decompile_all
// name: FUN_1002cab9c
// address: 0x1002cab9c
// body: available
// range: 0x1002cab9c-0x1002cad9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001002cad8c) */

void FUN_1002cab9c(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long unaff_x20;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long alStack_80 [4];
  long local_60;
  
  lVar2 = 0;
  FUN_1002c76a8();
  lVar2 = -(*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = (long)alStack_80 + lVar2;
  lVar3 = 0;
  __s8Dispatch0A9PredicateOMa();
  lVar9 = *(long *)(lVar3 + -8);
  puVar6 = (undefined8 *)(lVar5 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0));
  *puVar6 = *(undefined8 *)(unaff_x20 + _TtC9Alamofire7Request::underlyingQueue);
  (**(code **)(lVar9 + 0x68))
            (puVar6,*(undefined4 *)
                     PTR___s8Dispatch0A9PredicateO7onQueueyACSo17OS_dispatch_queueCcACmFWC_100995f80
             ,lVar3);
  puVar4 = puVar6;
  __s8Dispatch25_dispatchPreconditionTestySbAA0A9PredicateOF();
  (**(code **)(lVar9 + 8))(puVar6,lVar3);
  if (((ulong)puVar4 & 1) != 0) {
    plVar8 = *(long **)(unaff_x20 + _TtC9Alamofire7Request::mutableState);
    uVar7 = *(undefined8 *)(plVar8[2] + 0x10);
    _os_unfair_lock_lock(uVar7);
    lVar3 = *(long *)(*plVar8 + 0x60);
    _swift_beginAccess((long)plVar8 + lVar3,alStack_80,0x21,0);
    FUN_1002cffcc((long)plVar8 + lVar3,param_1);
    _swift_endAccess(alStack_80);
    _os_unfair_lock_unlock(uVar7);
    uVar7 = *(undefined8 *)(plVar8[2] + 0x10);
    _os_unfair_lock_lock(uVar7);
    FUN_100082394((long)plVar8 + lVar3,lVar5,FUN_1002c76a8);
    FUN_10007f314(&stack0x00000070 + lVar2,alStack_80,&DAT_100a82c40,&DAT_100817200);
    FUN_1000d27dc(lVar5,FUN_1002c76a8);
    _os_unfair_lock_unlock(uVar7);
    if (alStack_80[3] == 0) {
      FUN_100040bb4(alStack_80,&DAT_100a82c40,&DAT_100817200);
    }
    else {
      FUN_10003f030(alStack_80,alStack_80[3]);
      (**(code **)(local_60 + 0xb0))();
      FUN_10003f094(alStack_80);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1002cad8c);
  (*pcVar1)();
}

