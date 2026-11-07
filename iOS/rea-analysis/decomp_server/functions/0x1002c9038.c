// rea decompile_all
// name: FUN_1002c9038
// address: 0x1002c9038
// body: available
// range: 0x1002c9038-0x1002c92fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002c9038(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  long local_b0 [2];
  undefined1 auStack_a0 [24];
  long local_88;
  long local_80;
  undefined1 auStack_78 [24];
  
  lVar2 = 0;
  FUN_1002c76a8();
  lVar9 = (long)local_b0 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s10Foundation10URLRequestVMa();
  lVar14 = *(long *)(lVar2 + -8);
  lVar10 = lVar9 - (*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A9PredicateOMa();
  lVar7 = *(long *)(lVar3 + -8);
  puVar11 = (undefined8 *)(lVar10 - (*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0));
  *puVar11 = *(undefined8 *)(unaff_x20 + _TtC9Alamofire7Request::underlyingQueue);
  (**(code **)(lVar7 + 0x68))
            (puVar11,*(undefined4 *)
                      PTR___s8Dispatch0A9PredicateO7onQueueyACSo17OS_dispatch_queueCcACmFWC_100995f80
             ,lVar3);
  puVar4 = puVar11;
  __s8Dispatch25_dispatchPreconditionTestySbAA0A9PredicateOF();
  (**(code **)(lVar7 + 8))(puVar11,lVar3);
  if (((ulong)puVar4 & 1) != 0) {
    plVar8 = *(long **)(unaff_x20 + _TtC9Alamofire7Request::mutableState);
    uVar12 = *(undefined8 *)(plVar8[2] + 0x10);
    local_b0[1] = lVar9;
    _os_unfair_lock_lock(uVar12);
    lVar3 = (long)plVar8 + *(long *)(*plVar8 + 0x60);
    _swift_beginAccess(lVar3,auStack_78,1,0);
    (**(code **)(lVar14 + 0x10))(lVar10,param_1,lVar2);
    uVar13 = *(ulong *)(lVar3 + 0x148);
    uVar5 = uVar13;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)(lVar3 + 0x148) = uVar13;
    uVar6 = uVar13;
    local_b0[0] = param_1;
    if ((uVar5 & 1) == 0) {
      uVar6 = 0;
      FUN_100296c2c(0,*(long *)(uVar13 + 0x10) + 1,1,uVar13);
      *(ulong *)(lVar3 + 0x148) = uVar6;
    }
    uVar5 = *(ulong *)(uVar6 + 0x10);
    uVar13 = uVar6;
    if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar5) {
      uVar13 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
      FUN_100296c2c(uVar13,uVar5 + 1,1,uVar6);
    }
    *(ulong *)(uVar13 + 0x10) = uVar5 + 1;
    (**(code **)(lVar14 + 0x20))
              (uVar13 + ((ulong)*(byte *)(lVar14 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar14 + 0x50) ^ 0xffffffffffffffff)) +
               *(long *)(lVar14 + 0x48) * uVar5,lVar10,lVar2);
    *(ulong *)(lVar3 + 0x148) = uVar13;
    _os_unfair_lock_unlock(uVar12);
    uVar12 = *(undefined8 *)(plVar8[2] + 0x10);
    _os_unfair_lock_lock(uVar12);
    lVar2 = local_b0[1];
    FUN_100082394(lVar3,local_b0[1],FUN_1002c76a8);
    FUN_10007f314(lVar2 + 0xf0,auStack_a0,&DAT_100a82c40,&DAT_100817200);
    FUN_1000d27dc(lVar2,FUN_1002c76a8);
    _os_unfair_lock_unlock(uVar12);
    if (local_88 == 0) {
      FUN_100040bb4(auStack_a0,&DAT_100a82c40,&DAT_100817200);
    }
    else {
      FUN_10003f030(auStack_a0,local_88);
      (**(code **)(local_80 + 0x80))();
      FUN_10003f094(auStack_a0);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1002c92b8);
  (*pcVar1)();
}

