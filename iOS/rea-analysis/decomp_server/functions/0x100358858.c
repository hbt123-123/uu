// rea decompile_all
// name: FUN_100358858
// address: 0x100358858
// body: available
// range: 0x100358858-0x100358a2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100358858(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar1 = 0;
  FUN_1002c76a8();
  lVar1 = -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + lVar1;
  lVar2 = 0;
  __s10Foundation10URLRequestVMa();
  lVar7 = *(long *)(lVar2 + -8);
  lVar5 = (long)puVar6 - (*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar4 = *(long **)(unaff_x20 + _TtC9Alamofire7Request::mutableState);
  uVar3 = *(undefined8 *)(plVar4[2] + 0x10);
  _os_unfair_lock_lock(uVar3);
  lVar8 = *(long *)(*plVar4 + 0x60);
  _swift_beginAccess((long)plVar4 + lVar8,auStack_68,0,0);
  FUN_100082394((long)plVar4 + lVar8,puVar6,FUN_1002c76a8);
  lVar1 = *(long *)(&stack0x000000b8 + lVar1);
  _swift_bridgeObjectRetain(lVar1);
  FUN_1000d27dc(puVar6,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar3);
  if (*(long *)(lVar1 + 0x10) == 0) {
    _swift_bridgeObjectRelease(lVar1);
  }
  else {
    (**(code **)(lVar7 + 0x10))
              (lVar5,lVar1 + ((ulong)*(byte *)(lVar7 + 0x50) + 0x20 &
                             ((ulong)*(byte *)(lVar7 + 0x50) ^ 0xffffffffffffffff)) +
                     *(long *)(lVar7 + 0x48) * (*(long *)(lVar1 + 0x10) + -1),lVar2);
    _swift_bridgeObjectRelease(lVar1);
    uVar3 = 0x747065636341;
    lVar1 = -0x1a00000000000000;
    __s10Foundation10URLRequestV5value18forHTTPHeaderFieldSSSgSS_tF();
    (**(code **)(lVar7 + 8))(lVar5,lVar2);
    if (lVar1 != 0) {
      local_88 = 0x2c;
      uStack_80 = 0xe100000000000000;
      local_78 = uVar3;
      lStack_70 = lVar1;
      FUN_1002c6438();
      __sSy10FoundationE10components11separatedBySaySSGqd___tSyRd__lF
                (&local_88,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8,lVar5,lVar5);
      _swift_bridgeObjectRelease(lVar1);
      return;
    }
  }
  FUN_100004bb4(&DAT_100a833d8,&DAT_1008178b0);
  _swift_initStaticObject();
  return;
}

