// rea decompile_all
// name: FUN_10040ce00
// address: 0x10040ce00
// body: available
// range: 0x10040ce00-0x10040d133 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_10040ce00(int param_1)

{
  ID self;
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  ID IVar6;
  void *buffer;
  char *pcVar7;
  void *pvVar8;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined8 auStack_c0 [2];
  undefined1 auStack_b0 [16];
  long alStack_a0 [2];
  undefined1 auStack_90 [16];
  int aiStack_80 [4];
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  lVar2 = 0;
  FUN_1005cac3c();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar12 + 0x40));
  puVar9 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar11 + 0x40));
  lVar10 = (long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if (0 < param_1) {
    lVar4 = 0x400;
    __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
              (0x400,PTR___ss4Int8VN_100995c20);
    *(undefined8 *)(lVar4 + 0x10) = 0x400;
    _bzero((void *)(lVar4 + 0x20),0x400);
    buffer = (void *)(lVar4 + 0x20);
    iVar1 = _proc_pidpath(param_1,buffer,0x400);
    if (0 < iVar1) {
      lVar2 = lVar4;
      FUN_100108560(lVar4);
      _swift_bridgeObjectRelease(lVar4);
      pvVar8 = buffer;
      __s10Foundation3URLV15fileURLWithPathACSSh_tcfC(lVar10,lVar2,buffer);
      _swift_bridgeObjectRelease(buffer);
      __s10Foundation3URLV17lastPathComponentSSvg();
      (**(code **)(lVar11 + 8))(lVar10,lVar3);
      goto LAB_10040d0fc;
    }
    _swift_bridgeObjectRelease(lVar4);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(int *)(lVar10 + -0x10) = param_1;
    (**(code **)(lVar12 + 0x68))(puVar9,3,lVar2);
    if (DAT_100a89358 != -1) {
      _swift_once(&DAT_100a89358,FUN_1003fba60);
    }
    self = DAT_100a8e090;
    _objc_msgSend(DAT_100a8e090,"lock");
    lVar3 = DAT_100a8e098;
    if (DAT_100a8e098 != 0) {
      _swift_retain(DAT_100a8e098);
      puVar5 = puVar9;
      FUN_1005cc2b8();
      if (((ulong)puVar5 & 1) == 0) {
        _swift_release(lVar3);
      }
      else {
        local_68 = 0x80000001008b64c0;
        IVar6 = 0xd000000000000093;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000093,0x80000001008b6420)
        ;
        pcVar7 = "lastPathComponent";
        IVar6 = _objc_msgSend(IVar6,"lastPathComponent");
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar6);
        (*(code *)PTR____chkstk_darwin_100995498)(0);
        *(code **)(lVar10 + -0x30) = FUN_10040d550;
        *(long *)(lVar10 + -0x28) = lVar10 + -0x20;
        *(undefined8 *)(lVar10 + -0x48) = 0x35;
        *(undefined8 *)(lVar10 + -0x50) = local_68;
        FUN_1005cc010(FUN_1003a85e4,lVar10 + -0x40,puVar9,0x65746f6d65525555,0xe800000000000000,
                      IVar6,pcVar7,0xd000000000000014);
        _swift_release(lVar3);
        _swift_bridgeObjectRelease(pcVar7);
      }
    }
    _objc_msgSend(self,"unlock");
    (**(code **)(lVar12 + 8))(puVar9,lVar2);
  }
  buffer = (void *)0x0;
  pvVar8 = (void *)0x0;
LAB_10040d0fc:
  auVar13._8_8_ = pvVar8;
  auVar13._0_8_ = buffer;
  return auVar13;
}

