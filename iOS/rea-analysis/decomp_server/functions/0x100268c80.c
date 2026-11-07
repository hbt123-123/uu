// rea decompile_all
// name: FUN_100268c80
// address: 0x100268c80
// body: available
// range: 0x100268c80-0x100269193 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100268c80(long param_1,long *param_2,code *param_3,undefined8 param_4,ID param_5,
                  long param_6,undefined8 param_7,long param_8)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ID IVar12;
  ID local_c0;
  code *local_b8;
  undefined8 local_b0;
  ID local_a8;
  ulong local_a0;
  long local_98;
  long local_90;
  undefined1 auStack_78 [24];
  
  lVar8 = *param_2;
  puVar1 = &DAT_100a81018;
  local_a0 = param_7;
  local_90 = param_8;
  FUN_100004bb4(&DAT_100a81018,&DAT_100815150);
  lVar11 = (long)&local_c0 - (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar9 = *(ulong *)(lVar8 + 0x50);
  lVar10 = *(long *)(uVar9 - 8);
  IVar12 = lVar11 - (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_98 = lVar8;
  _swift_beginAccess(param_1 + 0x28,auStack_78,0,0);
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_100267cd4(param_3,param_4,param_5);
  }
  else {
    IVar2 = IVar12;
    IVar3 = param_5;
    uVar5 = uVar9;
    local_b0 = param_4;
    (**(code **)(lVar10 + 0x10))();
    (**(code **)(param_6 + 0x20))();
    uVar4 = (uint)(uVar5 >> 0x3c) & 3;
    local_a8 = IVar2;
    if (uVar4 == 0) {
      lVar8 = 0;
      local_b8 = param_3;
      __s10Foundation10URLRequestVMa();
      lVar7 = *(long *)(lVar8 + -8);
      (**(code **)(lVar7 + 0x10))(lVar11,local_a0,lVar8);
      (**(code **)(lVar7 + 0x38))(lVar11,0,1,lVar8);
      lVar8 = 0;
      FUN_100274594();
      _swift_allocObject();
      *(ID *)(lVar8 + 0x10) = local_a8;
      *(ID *)(lVar8 + 0x18) = IVar3;
      *(ulong *)(lVar8 + 0x20) = uVar5;
      FUN_10026b39c(lVar11,lVar8 + _TtC4Moya8Response::request);
      *(undefined8 *)(lVar8 + _TtC4Moya8Response::response) = 0;
      local_a0 = uVar5;
      FUN_100008184(IVar3,uVar5);
      uVar6 = *(undefined8 *)(local_98 + 0x58);
      IVar2 = IVar12;
      uVar5 = uVar9;
      local_98 = lVar8;
      FUN_100269194(lVar8,IVar12,uVar9,uVar6);
      (**(code **)(lVar10 + 8))(IVar12,uVar9);
      lVar11 = *(long *)(local_90 + 0x10);
      uVar4 = (uint)uVar5;
      if (lVar11 != 0) {
        lVar10 = local_90 + 0x20;
        local_c0 = IVar3;
        do {
          FUN_100269290(lVar10,lVar8,IVar2,uVar4 & 0x1ff,param_5,uVar9,uVar6);
          lVar10 = lVar10 + 0x28;
          lVar11 = lVar11 + -1;
          IVar3 = local_c0;
        } while (lVar11 != 0);
      }
      (*local_b8)(lVar8,IVar2,uVar4 & 0xff | ((uint)(uVar5 >> 8) & 1) << 8);
      FUN_10025fdac(lVar8,IVar2,uVar5,uVar4 >> 8 & 1);
      _swift_release(local_98);
      IVar12 = local_a8;
      uVar9 = local_a0;
    }
    else {
      if (uVar4 == 1) {
        uVar5 = uVar5 & 0xcfffffffffffffff;
        local_b8 = param_3;
        local_c0 = _objc_msgSend(IVar2,"statusCode");
        lVar8 = 0;
        __s10Foundation10URLRequestVMa();
        lVar7 = *(long *)(lVar8 + -8);
        (**(code **)(lVar7 + 0x10))(lVar11,local_a0,lVar8);
        (**(code **)(lVar7 + 0x38))(lVar11,0,1,lVar8);
        lVar8 = 0;
        FUN_100274594();
        _swift_allocObject();
        *(ID *)(lVar8 + 0x10) = local_c0;
        *(ID *)(lVar8 + 0x18) = IVar3;
        *(ulong *)(lVar8 + 0x20) = uVar5;
        FUN_10026b39c(lVar11,lVar8 + _TtC4Moya8Response::request);
        *(ID *)(lVar8 + _TtC4Moya8Response::response) = IVar2;
        local_c0 = IVar3;
        local_a0 = uVar5;
        FUN_100008184(IVar3,uVar5);
        uVar6 = *(undefined8 *)(local_98 + 0x58);
        IVar3 = IVar12;
        uVar5 = uVar9;
        local_a8 = IVar2;
        local_98 = lVar8;
        FUN_100269194(lVar8,IVar12,uVar9,uVar6);
        (**(code **)(lVar10 + 8))(IVar12,uVar9);
        lVar11 = *(long *)(local_90 + 0x10);
        uVar4 = (uint)uVar5;
        if (lVar11 != 0) {
          lVar10 = local_90 + 0x20;
          do {
            FUN_100269290(lVar10,lVar8,IVar3,uVar4 & 0x1ff,param_5,uVar9,uVar6);
            lVar10 = lVar10 + 0x28;
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
        (*local_b8)(lVar8,IVar3,uVar4 & 0xff | ((uint)(uVar5 >> 8) & 1) << 8);
        FUN_10025fdac(lVar8,IVar3,uVar5,uVar4 >> 8 & 1);
        _swift_release(local_98);
        FUN_100006cdc(local_c0,local_a0);
        return;
      }
      local_a0 = uVar5;
      (**(code **)(lVar10 + 8))(IVar12,uVar9);
      IVar12 = local_a8;
      lVar11 = *(long *)(local_90 + 0x10);
      if (lVar11 != 0) {
        lVar8 = local_90 + 0x20;
        uVar6 = *(undefined8 *)(local_98 + 0x58);
        do {
          FUN_10026934c(lVar8,IVar12,0,6,param_5,uVar9,uVar6);
          lVar8 = lVar8 + 0x28;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
      uVar9 = local_a0;
      FUN_10026397c(IVar12,IVar3,local_a0);
      (*param_3)(IVar12,0,0x106);
      FUN_1002639e4(IVar12,IVar3,uVar9);
      FUN_1002639e4(IVar12,IVar3,uVar9);
    }
    FUN_1002639e4(IVar12,IVar3,uVar9);
  }
  return;
}

