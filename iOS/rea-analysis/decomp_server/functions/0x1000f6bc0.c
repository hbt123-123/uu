// rea decompile_all
// name: FUN_1000f6bc0
// address: 0x1000f6bc0
// body: available
// range: 0x1000f6bc0-0x1000f6df7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000f6bc0(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined1 auStack_c0 [16];
  undefined8 local_b0;
  undefined *local_a0;
  undefined8 uStack_98;
  long *local_88;
  undefined8 uStack_80;
  undefined8 local_70;
  long lStack_68;
  undefined8 local_60;
  
  FUN_1003dab3c();
  (**(code **)(*param_1 + 0x108))(&local_88);
  _swift_release(param_1);
  plVar1 = local_88;
  if (local_88 != (long *)0x0) {
    pcVar9 = *(code **)(*local_88 + 0xb0);
    plVar2 = local_88;
    _swift_retain();
    (*pcVar9)();
    _swift_release(plVar1);
    if (param_2 != 0) {
      _swift_bridgeObjectRetain(param_2);
      uVar3 = 4;
      plVar5 = plVar2;
      lVar6 = param_2;
      FUN_100075d40(4,plVar2,param_2);
      _swift_bridgeObjectRelease(param_2);
      local_88 = (long *)0x2a2a2a;
      uStack_80 = 0xe300000000000000;
      uVar8 = param_4;
      __sSS14_fromSubstringySSSshFZ(uVar3,plVar5,lVar6);
      _swift_bridgeObjectRelease(param_4);
      puVar7 = PTR___sSSSTsWP_100995820;
      local_60 = uVar3;
      __sSS6append10contentsOfyx_tSTRzSJ7ElementRtzlF(&local_88,PTR___sSSN_1009957f8);
      uVar3 = local_60;
      __sSsySsSScfC();
      uVar4 = 0;
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)(uVar4);
      local_b0 = uVar3;
      local_a0 = puVar7;
      uStack_98 = uVar8;
      FUN_1003fb48c(FUN_1000f79c4,auStack_c0,0xd000000000000097,0x80000001008896d0,
                    0xd00000000000001d,0x8000000100889790,0x5b,0);
      _swift_bridgeObjectRelease(uVar8);
      if (DAT_100a73b60 != -1) {
        _swift_once(&DAT_100a73b60,FUN_1000efc4c);
      }
      FUN_1000b142c(DAT_100b360a8 + 200,&local_88);
      FUN_10003f030(&local_88,local_70);
      (**(code **)(lStack_68 + 0x48))(plVar2,param_2,local_70,lStack_68);
      _swift_bridgeObjectRelease(param_2);
      FUN_10003f094(&local_88);
      FUN_1000f6f64();
    }
    _swift_release(plVar1);
  }
  return;
}

