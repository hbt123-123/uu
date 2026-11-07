// rea decompile_all
// name: FUN_1001c0378
// address: 0x1001c0378
// body: available
// range: 0x1001c0378-0x1001c04a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1001c0378(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined1 local_d0 [8];
  undefined8 local_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined8 local_68;
  
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar5 + 0x40));
  puVar4 = local_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation4DateVACycfC(puVar4);
  __s10Foundation4DateV21timeIntervalSince1970Sdvg();
  pcVar6 = *(code **)(lVar5 + 8);
  uVar7 = param_1;
  (*pcVar6)(puVar4,lVar2);
  local_98 = 1;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 2;
  uVar3 = 0;
  local_90 = param_2;
  local_68 = param_1;
  FUN_1001196ac();
  uVar1 = 0;
  if ((uVar3 & 1) != 0) {
    __s10Foundation4DateVACycfC(puVar4);
    __s10Foundation4DateV21timeIntervalSince1970Sdvg();
    (*pcVar6)(puVar4,lVar2);
    local_d0[0] = 2;
    local_c0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 2;
    puVar4 = local_d0;
    local_c8 = param_2;
    local_a0 = uVar7;
    FUN_1001196ac(puVar4);
    uVar1 = (uint)puVar4;
  }
  return uVar1 & 1;
}

