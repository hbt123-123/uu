// rea decompile_all
// name: FUN_10026645c
// address: 0x10026645c
// body: available
// range: 0x10026645c-0x10026664f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10026645c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long local_80;
  long local_78;
  long lStack_70;
  long local_68;
  
  lVar1 = 0;
  FUN_100275594();
  local_68 = (long)&local_80 - (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar8 = *(long *)(unaff_x20 + 0x50);
  lVar9 = *(long *)(lVar8 + -8);
  local_80 = *(long *)(lVar9 + 0x40);
  lVar11 = local_68 - (local_80 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar6 = *(long *)(lVar2 + -8);
  lVar13 = lVar11 - (*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar10 = *(code **)(lVar9 + 0x10);
  (*pcVar10)(lVar11,param_1,lVar8);
  lVar12 = *(long *)(unaff_x20 + 0x58);
  lVar1 = lVar11;
  lVar4 = lVar8;
  FUN_100275940(lVar13,lVar11,lVar8,lVar12);
  __s10Foundation3URLV14absoluteStringSSvg();
  local_78 = lVar4;
  lStack_70 = lVar1;
  (**(code **)(lVar6 + 8))(lVar13,lVar2);
  (*pcVar10)(lVar11,param_1,lVar8);
  uVar5 = (ulong)*(byte *)(lVar9 + 0x50);
  uVar7 = uVar5 + 0x20 & (uVar5 ^ 0xffffffffffffffff);
  puVar3 = &DAT_1009a8f38;
  _swift_allocObject(&DAT_1009a8f38,uVar7 + local_80,uVar5 | 7);
  *(long *)(puVar3 + 0x10) = lVar8;
  *(long *)(puVar3 + 0x18) = lVar12;
  (**(code **)(lVar9 + 0x20))(puVar3 + uVar7,lVar11,lVar8);
  lVar4 = lVar8;
  lVar2 = lVar12;
  (**(code **)(lVar12 + 0x18))();
  lVar1 = local_68;
  (**(code **)(lVar12 + 0x28))(local_68,lVar8,lVar12);
  (**(code **)(lVar12 + 0x38))(lVar8,lVar12);
  lVar6 = 0;
  FUN_100261540();
  _swift_allocObject();
  *(long *)(lVar6 + 0x10) = lStack_70;
  *(long *)(lVar6 + 0x18) = local_78;
  *(code **)(lVar6 + 0x20) = FUN_1002666a0;
  *(undefined **)(lVar6 + 0x28) = puVar3;
  *(long *)(lVar6 + 0x30) = lVar4;
  *(long *)(lVar6 + 0x38) = lVar2;
  FUN_100260f1c(lVar1,lVar6 + _TtC4Moya8Endpoint::task);
  *(long *)(lVar6 + _TtC4Moya8Endpoint::httpHeaderFields) = lVar8;
  return lVar6;
}

