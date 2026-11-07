// rea decompile_all
// name: FUN_100354aec
// address: 0x100354aec
// body: available
// range: 0x100354aec-0x100354de3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100354cc0) */

void FUN_100354aec(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  code *pcVar7;
  long lVar8;
  long unaff_x20;
  long unaff_x21;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  lVar1 = 0;
  local_80 = param_3;
  __s10Foundation4DateVMa();
  lVar10 = *(long *)(lVar1 + -8);
  uVar6 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar11 = (long)&local_80 - uVar6;
  lVar12 = lVar11 - uVar6;
  lVar8 = *(long *)(param_2 + -8);
  lVar9 = lVar12 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar8 + 0x10))(lVar9,param_1,param_2);
  lVar2 = lVar12;
  _swift_dynamicCast(lVar12,lVar9,param_2,lVar1,0);
  if ((int)lVar2 != 0) {
    (**(code **)(lVar10 + 0x20))(lVar11,lVar12,lVar1);
    lVar2 = *(long *)(unaff_x20 + 0x40);
    lVar12 = lVar11;
    FUN_100350410(lVar11,lVar2,*(undefined8 *)(unaff_x20 + 0x48),*(undefined1 *)(unaff_x20 + 0x50));
    if (unaff_x21 == 0) {
      if (lVar2 != 0) {
        FUN_1003548b4(param_1,lVar12,lVar2,param_2,local_80);
        (**(code **)(lVar10 + 8))(lVar11,lVar1);
        _swift_bridgeObjectRelease(lVar2);
        goto LAB_100354d74;
      }
      FUN_100354de4(param_1,param_2,local_80);
    }
    (**(code **)(lVar10 + 8))(lVar11,lVar1);
    goto LAB_100354d74;
  }
  puVar3 = &local_78;
  _swift_dynamicCast(puVar3,lVar9,param_2,PTR___s10Foundation4DataVN_1009961e8,0);
  if ((int)puVar3 == 0) {
    uVar4 = 0;
    FUN_100277860(0);
    puVar3 = &local_78;
    _swift_dynamicCast(puVar3,lVar9,param_2,uVar4,0);
    if ((int)puVar3 == 0) {
      FUN_100354de4(param_1,param_2,local_80);
    }
    else {
      uVar4 = uStack_70;
      __sSo9NSDecimala10FoundationE11descriptionSSvg(local_78,uStack_70,local_68);
      FUN_1003548b4(param_1,local_78,uVar4,param_2,local_80);
      _swift_bridgeObjectRelease(uVar4);
    }
    goto LAB_100354d74;
  }
  pcVar7 = *(code **)(unaff_x20 + 0x30);
  if (pcVar7 == (code *)0x0) {
    FUN_100354de4(param_1,param_2,local_80);
  }
  else {
    if (pcVar7 == (code *)0x1) {
      uVar4 = 0;
      uVar5 = local_78;
      __s10Foundation4DataV19base64EncodedString7optionsSSSo27NSDataBase64EncodingOptionsV_tF
                (0,local_78,uStack_70);
    }
    else {
      uVar4 = local_78;
      uVar5 = uStack_70;
      (*pcVar7)(local_78,uStack_70);
      if (unaff_x21 != 0) goto LAB_100354d68;
    }
    FUN_1003548b4(param_1,uVar4,uVar5,param_2,local_80);
    _swift_bridgeObjectRelease(uVar5);
  }
LAB_100354d68:
  FUN_100006cdc(local_78,uStack_70);
LAB_100354d74:
  (**(code **)(lVar8 + 8))(lVar9,param_2);
  return;
}

