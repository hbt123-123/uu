// rea decompile_all
// name: FUN_1002ff368
// address: 0x1002ff368
// body: available
// range: 0x1002ff368-0x1002ff7af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002ff368(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  char *pcVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  long local_b0;
  char *local_a8 [3];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar4 = 0;
  local_a8[2] = (char *)param_3;
  FUN_1002c76a8();
  lVar4 = -(*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar10 = (char *)((long)&local_b0 + lVar4);
  plVar15 = *(long **)(unaff_x20 + _TtC9Alamofire7Request::mutableState);
  uVar13 = *(undefined8 *)(plVar15[2] + 0x10);
  _os_unfair_lock_lock(uVar13);
  lVar8 = *(long *)(*plVar15 + 0x60);
  _swift_beginAccess((long)plVar15 + lVar8,auStack_78,0,0);
  FUN_100082394((long)plVar15 + lVar8,pcVar10,FUN_1002c76a8);
  cVar1 = *pcVar10;
  FUN_1000d27dc(pcVar10,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar13);
  if (cVar1 == '\x03') {
    return;
  }
  uVar13 = *(undefined8 *)(plVar15[2] + 0x10);
  _os_unfair_lock_lock(uVar13);
  FUN_100082394((long)plVar15 + lVar8,pcVar10,FUN_1002c76a8);
  cVar1 = *pcVar10;
  FUN_1000d27dc(pcVar10,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar13);
  if (cVar1 == '\x04') {
    return;
  }
  uVar13 = *(undefined8 *)(plVar15[2] + 0x10);
  _os_unfair_lock_lock(uVar13);
  FUN_100082394((long)plVar15 + lVar8,pcVar10,FUN_1002c76a8);
  uVar12 = *(ulong *)(&stack0x000000a0 + lVar4);
  _swift_bridgeObjectRetain(uVar12);
  FUN_1000d27dc(pcVar10,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar13);
  if (uVar12 >> 0x3e == 0) {
    uVar5 = *(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = uVar12 & 0xffffffffffffff8;
    if ((long)uVar12 < 0) {
      uVar5 = uVar12;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar5 == 0) {
    _swift_bridgeObjectRelease(uVar12);
  }
  else {
    uVar6 = uVar5 - 1;
    if (SBORROW8(uVar5,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1002ff758);
      (*pcVar3)();
    }
    if ((uVar12 & 0xc000000000000001) == 0) {
      if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1002ff768);
        (*pcVar3)();
      }
      if (*(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1002ff76c);
        (*pcVar3)();
      }
      uVar6 = *(ulong *)(uVar12 + uVar6 * 8 + 0x20);
    }
    else {
      FUN_1002d38f8(uVar6,uVar12);
    }
    _swift_bridgeObjectRelease(uVar12);
    _swift_dynamicCastObjCClass(uVar6,&_OBJC_CLASS___NSURLSessionWebSocketTask);
    if (uVar6 != 0) {
      puVar7 = &DAT_1009af810;
      _swift_allocObject(&DAT_1009af810,0x28,7);
      *(undefined8 *)(puVar7 + 0x10) = param_2;
      *(char **)(puVar7 + 0x18) = local_a8[2];
      *(undefined8 *)(puVar7 + 0x20) = param_4;
      _swift_retain(param_4);
      __sSo25NSURLSessionWebSocketTaskC10FoundationE4send_17completionHandleryAbCE7MessageO_ys5Error_pSgctF
                (param_1,FUN_10030097c,puVar7);
      _swift_release(puVar7);
      return;
    }
  }
  lVar16 = *(long *)(unaff_x20 + _TtC9Alamofire16WebSocketRequest::socketMutableState);
  local_a8[1] = *(char **)(*(long *)(lVar16 + 0x10) + 0x10);
  _os_unfair_lock_lock();
  _swift_beginAccess(lVar16 + 0x18,auStack_90,0x21,0);
  puVar7 = &DAT_100a833a0;
  FUN_100004bb4(&DAT_100a833a0,&DAT_100817880);
  lVar8 = *(long *)(puVar7 + -8);
  uVar12 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar11 = (long)pcVar10 - uVar12;
  lVar14 = lVar11 - uVar12;
  lVar4 = 0;
  local_b0 = lVar11;
  local_a8[0] = pcVar10;
  __sSo25NSURLSessionWebSocketTaskC10FoundationE7MessageOMa();
  lVar9 = *(long *)(lVar4 + -8);
  (**(code **)(lVar9 + 0x10))(lVar14,param_1,lVar4);
  (**(code **)(lVar9 + 0x20))(lVar11,lVar14,lVar4);
  *(undefined8 *)(lVar11 + *(int *)(puVar7 + 0x30)) = param_2;
  iVar2 = *(int *)(puVar7 + 0x40);
  puVar7 = &DAT_1009af7e8;
  _swift_allocObject(&DAT_1009af7e8,0x20,7);
  *(char **)(puVar7 + 0x10) = local_a8[2];
  *(undefined8 *)(puVar7 + 0x18) = param_4;
  *(undefined8 *)(lVar11 + iVar2) = FUN_100300924;
  ((undefined8 *)(lVar11 + iVar2))[1] = puVar7;
  uVar6 = *(ulong *)(lVar16 + 0x18);
  _swift_retain(param_4);
  uVar12 = uVar6;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(lVar16 + 0x18) = uVar6;
  uVar5 = uVar6;
  if ((uVar12 & 1) == 0) {
    uVar5 = 0;
    FUN_100297190(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
    *(ulong *)(lVar16 + 0x18) = uVar5;
  }
  uVar12 = *(ulong *)(uVar5 + 0x10);
  uVar6 = uVar5;
  if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar12) {
    uVar6 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
    FUN_100297190(uVar6,uVar12 + 1,1,uVar5);
  }
  *(ulong *)(uVar6 + 0x10) = uVar12 + 1;
  FUN_1000a00a8(lVar11,uVar6 + ((ulong)*(byte *)(lVar8 + 0x50) + 0x20 &
                               ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff)) +
                       *(long *)(lVar8 + 0x48) * uVar12,&DAT_100a833a0,&DAT_100817880);
  *(ulong *)(lVar16 + 0x18) = uVar6;
  _swift_endAccess(auStack_90);
  _os_unfair_lock_unlock(local_a8[1]);
  return;
}

