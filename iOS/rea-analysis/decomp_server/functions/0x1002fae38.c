// rea decompile_all
// name: FUN_1002fae38
// address: 0x1002fae38
// body: available
// range: 0x1002fae38-0x1002fafc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1002fae38(undefined8 param_1,ID param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  ID self;
  long unaff_x20;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined auStack_70 [8];
  undefined *local_68;
  
  lVar3 = 0;
  __s10Foundation10URLRequestVMa();
  lVar9 = *(long *)(lVar3 + -8);
  puVar6 = auStack_70 + -(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = puVar6;
  (**(code **)(lVar9 + 0x10))(puVar6,param_1,lVar3);
  puVar1 = (undefined8 *)(unaff_x20 + _TtC9Alamofire16WebSocketRequest::configuration);
  lVar7 = puVar1[1];
  if (lVar7 != 0) {
    uVar8 = *puVar1;
    lVar5 = lVar7;
    _swift_bridgeObjectRetain();
    __s10Foundation10URLRequestV19allHTTPHeaderFieldsSDyS2SGSgvg();
    local_68 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (lVar5 != 0) {
      FUN_1002bb634();
      _swift_bridgeObjectRelease(lVar5);
    }
    FUN_1002bba74(0xd000000000000016,0x80000001008a98f0,uVar8,lVar7);
    _swift_bridgeObjectRelease(lVar7);
    puVar2 = local_68;
    puVar4 = local_68;
    FUN_1002bc258(local_68);
    _swift_bridgeObjectRelease(puVar2);
    __s10Foundation10URLRequestV19allHTTPHeaderFieldsSDyS2SGSgvs(puVar4);
  }
  __s10Foundation10URLRequestV19_bridgeToObjectiveCSo12NSURLRequestCyF();
  self = _objc_msgSend(param_2,"webSocketTaskWithRequest:",puVar4);
  _objc_msgSend(self,"setMaximumMessageSize:",puVar1[2]);
  (**(code **)(lVar9 + 8))(puVar6,lVar3);
  return self;
}

