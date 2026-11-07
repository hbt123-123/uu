// rea decompile_all
// name: FUN_1002ca52c
// address: 0x1002ca52c
// body: available
// range: 0x1002ca52c-0x1002ca6e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002ca52c(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 auStack_90 [3];
  undefined1 auStack_78 [24];
  long local_60;
  long local_58;
  
  lVar2 = 0;
  FUN_1002c76a8();
  lVar2 = -(*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = (long)auStack_90 + lVar2;
  lVar3 = 0;
  __s8Dispatch0A9PredicateOMa();
  lVar9 = *(long *)(lVar3 + -8);
  puVar7 = (undefined8 *)(lVar5 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0));
  *puVar7 = *(undefined8 *)(unaff_x20 + _TtC9Alamofire7Request::underlyingQueue);
  (**(code **)(lVar9 + 0x68))
            (puVar7,*(undefined4 *)
                     PTR___s8Dispatch0A9PredicateO7onQueueyACSo17OS_dispatch_queueCcACmFWC_100995f80
             ,lVar3);
  puVar4 = puVar7;
  __s8Dispatch25_dispatchPreconditionTestySbAA0A9PredicateOF();
  (**(code **)(lVar9 + 8))(puVar7,lVar3);
  if (((ulong)puVar4 & 1) != 0) {
    plVar8 = *(long **)(unaff_x20 + _TtC9Alamofire7Request::mutableState);
    uVar6 = *(undefined8 *)(plVar8[2] + 0x10);
    _os_unfair_lock_lock(uVar6);
    lVar3 = *(long *)(*plVar8 + 0x60);
    _swift_beginAccess((long)plVar8 + lVar3,auStack_90,0,0);
    FUN_100082394((long)plVar8 + lVar3,lVar5,FUN_1002c76a8);
    FUN_10007f314(&stack0x00000060 + lVar2,auStack_78,&DAT_100a82c40,&DAT_100817200);
    FUN_1000d27dc(lVar5,FUN_1002c76a8);
    _os_unfair_lock_unlock(uVar6);
    if (local_60 == 0) {
      FUN_100040bb4(auStack_78,&DAT_100a82c40,&DAT_100817200);
    }
    else {
      FUN_10003f030(auStack_78,local_60);
      (**(code **)(local_58 + 0xf0))();
      FUN_10003f094(auStack_78);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1002ca6e8);
  (*pcVar1)();
}

